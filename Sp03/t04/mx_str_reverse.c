#include <stdio.h>
#include <unistd.h>

int mx_strlen(const char *c);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
    int lenght;

    lenght = mx_strlen(s);

    for(int i = 0; i < lenght / 2; i++) {
        mx_swap_char(&s[i], &s[lenght - 1 - i]);
    }
}
