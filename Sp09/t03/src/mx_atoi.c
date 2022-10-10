#include "header.h"

bool mx_isdigit(int c);
int mx_atoi(const char *str) {
    int res = 0;
    int check;
    int i = 0;

    if (str[i] == '-') {
        check = -1;
        i++;
    }
    else if (str[i] == '+') {
        check = 1;
        i++;
    }

    while(str[i] != '\0') {
        if(mx_isdigit(str[i]))
            res = res * 10 + str[i] - '0';
        else
            return 0;

        i++;
    }

    return res * check;
}

