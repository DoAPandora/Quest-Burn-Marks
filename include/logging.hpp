#pragma once

#include "beatsaber-hook/shared/utils/utils.h"
#include "paper/shared/logger.hpp"

//#define LOG_INFO(value...)
#define INFO(str, ...) Paper::Logger::fmtLogTag<Paper::LogLevel::INF>(str, "BurnMarks" __VA_OPT__(, __VA_ARGS__))
//#define LOG_DEBUG(value...)
#define DEBUG(str, ...) Paper::Logger::fmtLogTag<Paper::LogLevel::DBG>(str, "BurnMarks" __VA_OPT__(, __VA_ARGS__))
//#define LOG_ERROR(value...)
#define ERROR(str, ...) Paper::Logger::fmtLogTag<Paper::LogLevel::ERR>(str, "BurnMarks" __VA_OPT__(, __VA_ARGS__))
#define WARNING(str, ...) Paper::Logger::fmtLogTag<Paper::LogLevel::WRN>(str, "BurnMarks" __VA_OPT__(, __VA_ARGS__))
#define CRITICAL(str, ...) Paper::Logger::fmtLogTag<Paper::LogLevel::CRIT>(str, "BurnMarks" __VA_OPT__(, __VA_ARGS__))

namespace BurnMarks {
    static constexpr auto Logger = Paper::ConstLoggerContext("BurnMarks");
}
