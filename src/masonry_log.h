
//
//    Log Helpers
//
#define ERROR_LOG(fmt, args...) app_log(APP_LOG_LEVEL_ERROR, __FILE_NAME__, __LINE__, fmt, ## args)
#define WARNING_LOG(fmt, args...) app_log(APP_LOG_LEVEL_WARNING, __FILE_NAME__, __LINE__, fmt, ## args)
#define INFO_LOG(fmt, args...) app_log(APP_LOG_LEVEL_INFO, __FILE_NAME__, __LINE__, fmt, ## args)
#define DEBUG_LOG(fmt, args...) app_log(APP_LOG_LEVEL_DEBUG, __FILE_NAME__, __LINE__, fmt, ## args)
#define VERBOSE_LOG(fmt, args...) app_log(APP_LOG_LEVEL_DEBUG_VERBOSE, __FILE_NAME__, __LINE__, fmt, ## args)

#define LOG_LAYER() do{}while(false);
#define LOG_TEXT_LAYER() do{}while(false);
#define LOG_BITMAP_LAYER() do{}while(false);