#include <stdio.h>
#include <unistd.h>

char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *s1, const char *s2);
int mx_count_substr(const char *str, const char *sub) {
    int str_len = mx_strlen(str);
    int sub_len = mx_strlen(sub);
    int res = 0;

    for (int i = 0; i <= str_len - sub_len; i++) {
        for (int j = 0; j < sub_len; j++) {
            if (str[i + j] != sub[j]) {
                if (j == sub_len)
                    res++;
                break;
            }
        }
    }

    return res;
}

