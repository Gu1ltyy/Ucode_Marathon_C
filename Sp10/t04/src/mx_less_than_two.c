#include "minilibmx.h"

int mx_less_than_two(int *total_str, int *total_sum, int *total_len) {
    int temp_temp_count_str = 0;
        int temp_count_sum = 0;
        int temp_temp_count_len = 0;
        char buffer;
        char temp;
        while (read(0, &buffer, 1)) {
            if (buffer == '\n') {
                temp_temp_count_len++;
                total_len++;
            }
            if (mx_isspace(buffer) && !mx_isspace(temp)) {
                temp_temp_count_str++;
                total_str++;
            }
            temp_count_sum++;
            total_sum++;
            temp = buffer;
        }
        mx_printchar('\t');
        mx_printint(temp_temp_count_len);
        mx_printchar('\t');
        mx_printint(temp_temp_count_str);
        mx_printchar('\t');
        mx_printint(temp_count_sum);
        mx_printchar('\n');
        return 0;
}

