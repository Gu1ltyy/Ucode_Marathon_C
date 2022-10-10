#include "stdio.h"
#include "stdlib.h"

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_concat_words(char **words) {
    if(!words)
        return NULL;


    char *str = mx_strdup(words[0]);
    int i = 0;

    while (words[i] != NULL) {
        str = mx_strjoin(str, words[i]);
        i++;
    }
    return str;
}

