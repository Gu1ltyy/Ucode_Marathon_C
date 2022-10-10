#include "stdio.h"
#include "stdlib.h"

int *mx_copy_int_arr(const int *src, int size);
int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    if (!src)
        return NULL;

    int *temp = malloc(src_size * 4);
    int lenght = 0;
    int x = 0;
    int st;

    for ( int i = 0; i < src_size; i++) {
        st = 0;

        for (int j = 0; j < src_size; j++) {
            if (src[i] == temp[j])
                st = 1;
        }
        
        if (st == 0) {
            temp[x++] = src[i];
            lenght++;
        }
    }

    *dst_size = lenght;
    return temp;
}

