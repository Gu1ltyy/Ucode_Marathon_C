#include "stdbool.h"
#include <stdio.h>
#include <unistd.h>

bool mx_is_odd(int value) {
    if(value % 2 == 1)
        return true;
    else
        return false;
}
