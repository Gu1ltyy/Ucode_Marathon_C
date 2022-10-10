#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool isspace(int c) {
    switch(c) {
    case ' ':
        return true;
    case '\t':
        return true;
    case '\n':
        return true;
    case '\v':
        return true;
    case '\f':
        return true;
    case '\r':
        return true;
    default:
        return false;
    }
}

int mx_atoi(const char *str) {
    int res = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9')
            res = res * 10 + str[i] - '0';
        else if(isspace(str[i]))
            break;
    }

    return res;
}

