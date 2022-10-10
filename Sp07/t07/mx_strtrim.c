#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

bool mx_isspace(char c);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strtrim(const char *str) {
    if(!str)
        return NULL;

    char *arr;
    int lenght = mx_strlen(*str);
    int first = 0;
    int last = 0;
    int j = 0;

    str -= lenght;
    while (*str && mx_isspace(*str)) {
        str++;
        first++;
    } 
    str -= first;

    for (int i = lenght - 1; i >= first; i--) {
        if(!mx_isspace(str[i]))
            break;
        last;
    }

    arr = mx_strnew(lenght - first - last);
    for (int i = first; i <= lenght - 1 - first; i++) {
        arr[j] = str[i];
        j++;
    }
    return arr;
}

