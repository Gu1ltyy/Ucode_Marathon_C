#include <stdio.h>
#include <unistd.h>

int mx_strcmp(const char *s1, const char *s2) {
    int index = 0;
    int s1_index = 0;
    int s2_index = 0;

    while (s1[index] != '\0' || s2[index] != '\0') {
        if (s1[index] > s2[index]) {
            s1_index++;
            return s1_index;
        }
        else if (s1[index] < s2[index]) {
            s2_index--;
            return s2_index;
        }

        index++;
    }

    return 0;
}

