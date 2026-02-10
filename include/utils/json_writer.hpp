#pragma once

#include <cstdint>
#include <iosfwd>
#include <string_view>
#include <vector>

// Minimal, dependency-free JSON writer with correct escaping and comma handling.
// Intended to replace ad-hoc `out <<` JSON generation report-by-report.
//
// Usage:
//   JsonWriter jw(out);
//   jw.begin_object();
//   jw.key("ok"); jw.value_bool(true);
//   jw.key("arr"); jw.begin_array(); jw.value_number(1); jw.end_array();
//   jw.end_object();

struct JsonFormat {
    int indent = 2;      // spaces per level (0 = compact)
    bool pretty = true;  // newlines + indentation
};

class JsonWriter {
public:
    explicit JsonWriter(std::ostream& os, JsonFormat fmt = {});

    JsonWriter& begin_object();
    JsonWriter& end_object();

    JsonWriter& begin_array();
    JsonWriter& end_array();

    JsonWriter& key(std::string_view k);

    JsonWriter& value_string(std::string_view v);
    JsonWriter& value_number(int64_t v);
    JsonWriter& value_number(uint64_t v);
    JsonWriter& value_number(double v);
    JsonWriter& value_bool(bool v);
    JsonWriter& value_null();

private:
    enum class ContainerKind { Object, Array };

    struct Frame {
        ContainerKind kind;
        bool first = true;
        bool objectExpectValue = false; // only meaningful for Object
    };

    std::ostream& m_os;
    JsonFormat m_fmt;
    std::vector<Frame> m_stack;

    void write_indent();
    void write_newline_if_pretty();

    void before_key();
    void after_key();
    void before_value();
    void after_value();

    void write_escaped_string(std::string_view s);
};

