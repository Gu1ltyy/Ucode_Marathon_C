#include <stdio.h>
#include <unistd.h>
#include "stdbool.h"

int mx_cout_words(const char *str, char delimiter) {
    bool state = true;
    int i = 0;
    int j = 0;

    while(str[i]) {
        if(str[i] == delimiter)
            state = false;
        else if(state == false) {
            state = true;
            j++;
        }

        i++;
    }

    return j;
}

