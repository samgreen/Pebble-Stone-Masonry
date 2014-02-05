#include "../sg_lib.h"

void test_benchmark() {
    Benchmark_Start("Count to 50,000");

    for (int i = 0; i <= 50000; ++i) {
        if (i % 10000 == 0) INFO_LOG("Number %d.", i);
    }
    
    Benchmark_End();
}