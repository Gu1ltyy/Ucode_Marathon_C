#include "file_to_str.h"

char *mx_file_to_str(const char *filename) {
    if (!filename)
        return NULL;  
    int file = open(filename, O_RDONLY);
    if (file < 0)
        return NULL;

    int i = 0;
    char temp;
    int lenght = 0;

    while (read(filename, &temp, 1))
        lenght++;
    if (close(file) < 0)
        return NULL;

    file = open(filename, O_RDONLY);
    if (file < 0)
        return NULL;

    char *arr = mx_strnew(lenght);
    while (read(file, &temp, 1))
        arr[i++] = temp;
    if (close(file) < 0)
        return NULL;

    return arr;
}

