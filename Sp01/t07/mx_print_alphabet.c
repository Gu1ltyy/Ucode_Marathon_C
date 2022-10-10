#include "unistd.h"

void mx_printchar(char c);
void mx_print_alphabet(void) {
    for(int i = 65; i <= 122; i++) {
        mx_printchar(i);
        if(i == 122)
            break;
        if(i <= 90)
            i += 32;
        else
            i -= 32;
    }
    write(1, "\n", 1);
}
