#include "unistd.h"

void mx_printstr(const char *s) {
    int i = 0;
    while(*s) {
        s++;
        i++;
    }

    s = s - i;
    write(1, s, i);
}

