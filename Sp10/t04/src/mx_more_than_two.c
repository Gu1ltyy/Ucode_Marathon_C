#include "minilibmx.h"

void mx_more_than_two(int *total_str, int *total_sum, int *total_len) {
    mx_printchar('\t');
    mx_printint(*total_len);
    mx_printchar('\t');
    mx_printint(*total_str);
    mx_printchar('\t');
    mx_printint(*total_sum);
    mx_printstr("\ttotal\n");
}

