#include "stdbool.h"
#include <stdio.h>
#include <unistd.h>

bool mx_islower(int c) {
    if(97 >= c && c <= 122)
        return true;
    else
        return false;
}
