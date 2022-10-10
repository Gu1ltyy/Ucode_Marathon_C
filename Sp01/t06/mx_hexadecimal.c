#include "unistd.h"

void mx_printchar(char c);
void mx_hexademical(void) {
    for(int i = 48; i <= 70; ++i) {
        mx_printchar(i);
        if(i == 56)
            i = 64;
    }
    wrie(1, "\n", 1);
}
