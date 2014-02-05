Pebble SG Lib
=============

Awesome utilities to make pebble development simple and easy.

Logging
========
Helpers for all log levels. Header defines these methods:

    ERROR_LOG(fmt, args...)
    WARNING_LOG(fmt, args...)
    INFO_LOG(fmt, args...)
    DEBUG_LOG(fmt, args...)
    VERBOSE_LOG(fmt, args...)

Sample usage:

    INFO_LOG("This will be logged at the info level.");

    
Benchmark
=========
Easy benchmarking to measure run times for code blocks. Header exposes these methods:

    void Benchmark_Start(char *name);
    uint32_t Benchmark_End();


Sample usage:

    Benchmark_Start("Count to 50,000");

    for (int i = 0; i <= 50000; ++i) {
        if (i % 10000 == 0) INFO_LOG("Number %d.", i);
    }
    
    Benchmark_End();
