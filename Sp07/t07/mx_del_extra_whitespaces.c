#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

bool mx_isspace(char c);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);

char *mx_del_extra_whitespaces(const char *str) {
    if (!str)
        return NULL;
        
    char *temp_mem = mx_strnew(mx_strlen(str));
    char *res = NULL;
    int i = 0;
    int j = 0;

    while (str[i]) {
        if (!(mx_isspace(str[i]))) {
            temp_mem[j] = str[i];
            j++;
        }
        if(!(mx_isspace(str[i])) && mx_isspace(str[i + 1])) {
            temp_mem[j] = ' ';
            j++;
        }

        i++;
    }
    res = mx_strtrim(temp_mem);
    mx_strdel(&temp_mem);
    
    return res;
}

