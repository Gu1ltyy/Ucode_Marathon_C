#include <stdio.h>
#include <unistd.h>

int mx_toupper(int c) {
    if(c >= 97 && c <= 122) {
        c -= 32;
    }
    return c;
}
