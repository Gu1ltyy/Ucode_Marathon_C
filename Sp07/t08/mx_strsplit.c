#include "stdio.h"
#include "stdlib.h"

int mx_cout_words(const char *str, char delimiter);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strnew(const int size);

char **mx_strsplit(char const *s, char c) {
    if (!s)
        return NULL;

    int words = mx_cout_words(s, c);
    char **arr = (char **)malloc(words * 8);
    int count;

    for (int i = 0; i < words; i++, count = 0) {
        while (*s == c)
            s++;
        
        while (*s != c) {
            count++;
            s++;
        }
        s -= count;
        arr[i] = (char *)malloc(count);
        for (int j = 0; j < count; j++) {
            s++;
            arr[i][j] = *s;
        }
    }

    return arr;
}

