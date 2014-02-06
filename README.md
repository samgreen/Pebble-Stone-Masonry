Pebble Stone Masonry Lib
=============

Awesome utilities to simplify pebble development. Take pride in your stonework and become a master craftsman in Pebble Stonemasonry.

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



Graphics
=========

**GSize**

Basic helpers for doubling or halfing a GSize.

    GSize gsize_half(const GSize * const size);
    GSize gsize_double(const GSize * const size);

**GRect**

    int16_t grect_get_min_x(const GRect * const rect);
    int16_t grect_get_min_y(const GRect * const rect);

    int16_t grect_get_mid_x(const GRect * const rect);
    int16_t grect_get_mid_y(const GRect * const rect);

    int16_t grect_get_max_x(const GRect * const rect);
    int16_t grect_get_max_y(const GRect * const rect);

    void grect_offset(GRect * rect, const GPoint * const offset);

Usage is pretty simple. If we have a GRect defined as `GRect my_rect = GRect(20, 30, 40, 50)`. The following makes sense:

    int16_t min_x = grect_get_min_x(&my_rect); // min_x = 20
    int16_t min_y = grect_get_min_y(&my_rect); // min_y = 30
    int16_t mid_x = grect_get_mid_x(&my_rect); // mid_x = 40
    int16_t mid_y = grect_get_mid_y(&my_rect); // mid_y = 55
    int16_t max_x = grect_get_max_x(&my_rect); // max_x = 60
    int16_t max_y = grect_get_max_y(&my_rect); // max_y = 80

