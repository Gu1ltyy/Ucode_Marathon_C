#include <stdio.h>
#include <unistd.h>
#include "stdbool.h"

bool mx_isdigit(int c);
bool mx_isspace(char c);
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

