#include "stdbool.h"
#include <stdio.h>
#include <unistd.h>

int mx_tolower(int c);
int mx_toupper(int c);
bool mx_isupper(int c);
bool mx_islower(int c);

void mx_reverse_case(char *s) {
    int x = 0;
    
    while(s[x] != '\0') {
        if(mx_isupper(s[x]))
            s[x] = mx_tolower(s[x]);
        else
            s[x] = mx_toupper(s[x]);
        
        if(s[x] != '\0')
            x++;
    }
}
