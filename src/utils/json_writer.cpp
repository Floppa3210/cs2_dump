#include "include/utils/json_writer.hpp"

#include <cmath>
#include <ostream>
#include <stdexcept>

JsonWriter::JsonWriter(std::ostream& os, JsonFormat fmt) : m_os(os), m_fmt(fmt) {}

void JsonWriter::write_indent() {
    if (!m_fmt.pretty || m_fmt.indent <= 0) return;
    const int depth = static_cast<int>(m_stack.size());
    const int spaces = depth * m_fmt.indent;
    for (int i = 0; i < spaces; ++i) m_os.put(' ');
}

void JsonWriter::write_newline_if_pretty() {
    if (m_fmt.pretty) m_os.put('\n');
}

void JsonWriter::before_key() {
    if (m_stack.empty() || m_stack.back().kind != ContainerKind::Object) {
        throw std::logic_error("JsonWriter::key() outside of object");
    }

    auto& f = m_stack.back();
    if (!f.first) m_os.put(',');
    write_newline_if_pretty();
    write_indent();
    f.first = false;
    f.objectExpectValue = true;
}

void JsonWriter::after_key() {
    if (!m_fmt.pretty) return;
    m_os.put(' ');
}

void JsonWriter::before_value() {
    if (!m_stack.empty()) {
        auto& f = m_stack.back();
        if (f.kind == ContainerKind::Object) {
            if (!f.objectExpectValue) {
                throw std::logic_error("JsonWriter::value_*() in object without preceding key()");
            }
            return;
        }

        // Array
        if (!f.first) m_os.put(',');
        write_newline_if_pretty();
        write_indent();
        f.first = false;
    }
}

void JsonWriter::after_value() {
    if (!m_stack.empty()) {
        auto& f = m_stack.back();
        if (f.kind == ContainerKind::Object) {
            f.objectExpectValue = false;
        }
    }
}

void JsonWriter::write_escaped_string(std::string_view s) {
    m_os.put('"');
    for (unsigned char c : s) {
        switch (c) {
            case '"':  m_os << "\\\""; break;
            case '\\': m_os << "\\\\"; break;
            case '\b': m_os << "\\b"; break;
            case '\f': m_os << "\\f"; break;
            case '\n': m_os << "\\n"; break;
            case '\r': m_os << "\\r"; break;
            case '\t': m_os << "\\t"; break;
            default:
                if (c < 0x20) {
                    static const char hex[] = "0123456789ABCDEF";
                    m_os << "\\u00" << hex[(c >> 4) & 0xF] << hex[c & 0xF];
                } else {
                    m_os.put(static_cast<char>(c));
                }
                break;
        }
    }
    m_os.put('"');
}

JsonWriter& JsonWriter::begin_object() {
    before_value();
    m_os.put('{');
    m_stack.push_back(Frame{ContainerKind::Object, true, false});
    return *this;
}

JsonWriter& JsonWriter::end_object() {
    if (m_stack.empty() || m_stack.back().kind != ContainerKind::Object) {
        throw std::logic_error("JsonWriter::end_object() without matching begin_object()");
    }

    const bool hadAny = !m_stack.back().first;
    m_stack.pop_back();

    if (hadAny) {
        write_newline_if_pretty();
        write_indent();
    }
    m_os.put('}');
    after_value();
    return *this;
}

JsonWriter& JsonWriter::begin_array() {
    before_value();
    m_os.put('[');
    m_stack.push_back(Frame{ContainerKind::Array, true, false});
    return *this;
}

JsonWriter& JsonWriter::end_array() {
    if (m_stack.empty() || m_stack.back().kind != ContainerKind::Array) {
        throw std::logic_error("JsonWriter::end_array() without matching begin_array()");
    }

    const bool hadAny = !m_stack.back().first;
    m_stack.pop_back();

    if (hadAny) {
        write_newline_if_pretty();
        write_indent();
    }
    m_os.put(']');
    after_value();
    return *this;
}

JsonWriter& JsonWriter::key(std::string_view k) {
    before_key();
    write_escaped_string(k);
    m_os.put(':');
    after_key();
    return *this;
}

JsonWriter& JsonWriter::value_string(std::string_view v) {
    before_value();
    write_escaped_string(v);
    after_value();
    return *this;
}

JsonWriter& JsonWriter::value_number(int64_t v) {
    before_value();
    m_os << v;
    after_value();
    return *this;
}

JsonWriter& JsonWriter::value_number(uint64_t v) {
    before_value();
    m_os << v;
    after_value();
    return *this;
}

JsonWriter& JsonWriter::value_number(double v) {
    before_value();
    if (!std::isfinite(v)) {
        // JSON has no NaN/Inf; emit null to keep the output valid.
        m_os << "null";
    } else {
        m_os << v;
    }
    after_value();
    return *this;
}

JsonWriter& JsonWriter::value_bool(bool v) {
    before_value();
    m_os << (v ? "true" : "false");
    after_value();
    return *this;
}

JsonWriter& JsonWriter::value_null() {
    before_value();
    m_os << "null";
    after_value();
    return *this;
}

