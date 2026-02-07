#pragma once
#include "common.hpp"

//=============================================================================
// LOGGING SYSTEM - Thread-safe logging with console + file outputs
//=============================================================================

enum class LogLevel {
    Trace,
    Debug,
    Info,
    Success,
    Warning,
    Error,
    Fatal
};

class Logger {
private:
    std::ofstream m_file;
    std::mutex m_mutex;
    std::string m_logPath;
    int m_successCount = 0;
    int m_errorCount = 0;
    int m_warningCount = 0;
    int m_infoCount = 0;
    bool m_consoleOutput = true;
    bool m_fileOutput = true;
    LogLevel m_minLevel = LogLevel::Info;

    std::string GetTimestamp() {
        auto now = std::chrono::system_clock::now();
        auto time = std::chrono::system_clock::to_time_t(now);
        std::tm tm;
        localtime_s(&tm, &time);
        char buf[32];
        strftime(buf, sizeof(buf), "%H:%M:%S", &tm);
        return std::string(buf);
    }

    const char* LevelToString(LogLevel level) {
        switch (level) {
            case LogLevel::Trace: return "TRACE";
            case LogLevel::Debug: return "DEBUG";
            case LogLevel::Info: return "INFO";
            case LogLevel::Success: return "SUCCESS";
            case LogLevel::Warning: return "WARNING";
            case LogLevel::Error: return "ERROR";
            case LogLevel::Fatal: return "FATAL";
            default: return "UNKNOWN";
        }
    }

    const char* ColorizeLevel(LogLevel level) {
        switch (level) {
            case LogLevel::Trace: return "\033[90m[TRACE]\033[0m";
            case LogLevel::Debug: return "\033[36m[DEBUG]\033[0m";
            case LogLevel::Info: return "\033[34m[INFO]\033[0m";
            case LogLevel::Success: return "\033[32m[SUCCESS]\033[0m";
            case LogLevel::Warning: return "\033[33m[WARNING]\033[0m";
            case LogLevel::Error: return "\033[31m[ERROR]\033[0m";
            case LogLevel::Fatal: return "\033[35m[FATAL]\033[0m";
            default: return "[UNKNOWN]";
        }
    }

public:
    void Initialize(const std::string& path, LogLevel minLevel = LogLevel::Info,
                    bool console = true, bool file = true) {
        m_logPath = path;
        m_minLevel = minLevel;
        m_consoleOutput = console;
        m_fileOutput = file;

        if (m_fileOutput) {
            m_file.open(path, std::ios::out | std::ios::trunc);
            if (m_file.is_open()) {
                m_file << "=============================================================================\n";
                m_file << "  CS2 PRO DUMPER - Professional Memory Analysis Tool\n";
                m_file << "=============================================================================\n";
                auto now = std::chrono::system_clock::now();
                auto time = std::chrono::system_clock::to_time_t(now);
                std::tm tm;
                localtime_s(&tm, &time);
                char buf[64];
                strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &tm);
                m_file << "  Session Started: " << buf << "\n";
                m_file << "=============================================================================\n\n";
            }
        }
    }

    void Log(LogLevel level, const std::string& category, const std::string& message) {
        if (level < m_minLevel) return;

        std::lock_guard<std::mutex> lock(m_mutex);

        switch (level) {
            case LogLevel::Success: m_successCount++; break;
            case LogLevel::Error: m_errorCount++; break;
            case LogLevel::Warning: m_warningCount++; break;
            case LogLevel::Info: m_infoCount++; break;
            default: break;
        }

        std::string timestamp = GetTimestamp();

        if (m_consoleOutput) {
            std::cout << "[" << timestamp << "] " << ColorizeLevel(level)
                      << " [" << category << "] " << message << std::endl;
        }

        if (m_fileOutput && m_file.is_open()) {
            m_file << "[" << timestamp << "] [" << LevelToString(level) << "] ["
                   << category << "] " << message << "\n";
            m_file.flush();
        }
    }

    void Trace(const std::string& cat, const std::string& msg) { Log(LogLevel::Trace, cat, msg); }
    void Debug(const std::string& cat, const std::string& msg) { Log(LogLevel::Debug, cat, msg); }
    void Info(const std::string& cat, const std::string& msg) { Log(LogLevel::Info, cat, msg); }
    void Success(const std::string& cat, const std::string& msg) { Log(LogLevel::Success, cat, msg); }
    void Warning(const std::string& cat, const std::string& msg) { Log(LogLevel::Warning, cat, msg); }
    void Error(const std::string& cat, const std::string& msg) { Log(LogLevel::Error, cat, msg); }
    void Fatal(const std::string& cat, const std::string& msg) { Log(LogLevel::Fatal, cat, msg); }

    void WriteSummary() {
        std::lock_guard<std::mutex> lock(m_mutex);
        if (m_fileOutput && m_file.is_open()) {
            m_file << "\n=============================================================================\n";
            m_file << "  DUMP SUMMARY\n";
            m_file << "=============================================================================\n";
            m_file << "  Info Messages:     " << m_infoCount << "\n";
            m_file << "  Success Messages:  " << m_successCount << "\n";
            m_file << "  Warnings:          " << m_warningCount << "\n";
            m_file << "  Errors:            " << m_errorCount << "\n";
            m_file << "=============================================================================\n";
            m_file.close();
        }
    }
};

inline Logger g_Logger;
