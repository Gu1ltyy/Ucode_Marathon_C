#include "unistd.h"

void mx_printstr(const char *s) {
    long lenght = 0;

    for(; s[lenght] != '\0'; lenght++) {}    

    write(1, s, lenght);
}

