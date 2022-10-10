#include "stdio.h"
#include "stdlib.h"

char *mx_strdup(const char *str) {
    int lenght = 0;
    int count = 0;

    while (str[lenght])
        lenght++;

    if (lenght < 0)
        return NULL;

    char *dst = (char *)malloc(lenght + 1);
    for (int i = 0; i <= lenght; i++)
        dst[i] = '\0';

    while (*str) {
        *dst++ = *str++;
        count ++;
    }
    dst -= count;
    
    return dst;
}

