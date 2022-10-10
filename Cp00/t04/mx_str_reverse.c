#include <stdio.h>
#include <unistd.h>

void mx_str_reverse(char *s) {
    int lenght = 0;
    char temp;

    while(*s) {
        s++;
        lenght++;
    }

    for(int i = 0; i < lenght / 2; i++) {
        temp = s[i];
        s[i] = s[lenght - 1 - i];
        s[lenght - 1 - i] = temp;
    }
}

