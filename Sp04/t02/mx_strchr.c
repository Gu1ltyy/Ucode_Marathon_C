#include <stdio.h>
#include <unistd.h>

char *mx_strchr(const char *s, int c) {
    int index = 0;

    while(s[index] && s[index] != c) {
        if(s[index] == c)
            return (char *)(s + index);
        else
            return NULL;
    }
}

