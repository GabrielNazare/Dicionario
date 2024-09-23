#ifndef METRICS_H
#define METRICS_H

#include <time.h>

void record_start_time(clock_t* start);
void record_end_time(clock_t* end);
void calculate_elapsed_time(clock_t start, clock_t end);

#endif
