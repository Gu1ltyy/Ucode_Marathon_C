#include "stdio.h"
#include "stdbool.h"
#include "unistd.h"

bool mx_isspace(char c) {
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

bool mx_isdigit(int c) {
    if (c >= '0' && c <= '9')
        return true;
    else
        return false;
}


int mx_atoi(const char *str) {
    bool is_negative = false;
    long int result = 0;
    int dod = 1;
    int begin = 0;
    int end;
    
    while (mx_isspace(str[begin]))
        begin++;
    if (str[begin] == '-') {
        is_negative = true;
        begin++;
    }
    else if (str[begin] == '+')
        begin++;
    end = begin;
    while (mx_isdigit(str[end]))
        end++;
    end--;
    for (int i = end; i >= begin; i--) {
        result += (str[i] - '0') * dod;
        dod *= 10;
    }
    if(is_negative)
        result = -result;
    
    if (result >= -2147483648 && result <= 2147483647)
        return result;
    return 0;
}

