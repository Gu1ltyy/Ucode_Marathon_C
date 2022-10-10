#include <stdio.h>
#include <unistd.h>

char *mx_strchr(const char *s, int c) {
    int index = 0;
    char symb = (char)c;

    if(c > 0 &&  c < 127) {
        while(s[index] != '\0') {
            if(s[index] == symb)
                return (char *)(s + index);
            
            index++;
        }
    }

    return 0;
}

