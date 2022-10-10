#include "time.h"

double mx_timer(void (*f)()) {
    clock_t start;
    clock_t end;
    start = clock();
    f();
    end = clock();
    return (double) ((end - start) / CLOCKS_PER_SEC);
}

