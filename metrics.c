#include "metrics.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void record_start_time(clock_t* start) {
    *start = clock();
}

void record_end_time(clock_t* end) {
    *end = clock();
}

void calculate_elapsed_time(clock_t start, clock_t end) {
    double elapsed_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Elapsed time: %.6f seconds.\n", elapsed_time);
}
