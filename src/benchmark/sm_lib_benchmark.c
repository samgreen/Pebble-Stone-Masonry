
#include "../sm_lib.h"

//
// Constants
//
static const int MILLISECONDS_PER_SECOND = 1000;


//
// Static variables
//
static uint32_t start_time_ms;
static char *current_name;


//
// Forward declarations
//
static inline uint32_t GetCurrentMS(uint32_t *out_time_ms);


void Benchmark_Start(char *name) {
    INFO_LOG("Running '%s' benchmark...", name);

    // Save the benchmark name
    current_name = name;
    
    // Save the start time
    GetCurrentMS(&start_time_ms);
}


//
//                               ** Notice **
//
//  Ensure we log the result after we store the time. Don't want the logging
//  burning time in our benchmark.
//
uint32_t Benchmark_End() {

    // Get the end time
    uint32_t end_time_ms = GetCurrentMS(NULL);

    // Calculate deltas
    uint32_t delta_ms = end_time_ms - start_time_ms;

    INFO_LOG("'%s' benchmark result: %ums", current_name, (unsigned int)delta_ms);

    // Return the duration of the benchmark
    return delta_ms;
}


//
//      Helpers
//
static inline uint32_t GetCurrentMS(uint32_t *out_time_ms) {

    // Save the start time
    static time_t current_time;
    uint32_t current_time_ms = time_ms(&current_time, NULL);
    current_time_ms += current_time * MILLISECONDS_PER_SECOND;

    // Pass result back as reference
    if (out_time_ms != NULL) {
        out_time_ms = &current_time_ms;
    }

    // Also return value
    return current_time_ms;
}