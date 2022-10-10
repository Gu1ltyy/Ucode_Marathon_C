#include "header.h"

char *mx_itoa(long long number) {
    char *res = NULL;

    if (number == 0) {
        res = mx_strnew(1);
        res[0] = '0';
        return res;
    }
    int len = 0;
    long long num_copy = number;

    if (num_copy < 0) {
        num_copy *= -1;
        len++;
    }
    while (num_copy != 0) {
        num_copy /= 10;
        len++;
    }
    res = mx_strnew(len);

    if (number < 0) {
        res[0] = '-';
        number *= -1;
    }
    res[len--] = '\0';

    while ((number != 0 && len >= 0) && res[len] != '-') {
        res[len--] = (number % 10) + '0';
        number /= 10;
    }
    return res;
}

