#include "stdio.h"
#include "unistd.h"

void mx_swap_char(const char *s1, const char *s2) {
    char temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

