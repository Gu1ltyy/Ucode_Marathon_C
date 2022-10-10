#include "duplicate.h"

t_intarr *mx_del_dup_arr(t_intarr *src) {
    if (!src)
        return NULL;

    t_intarr *temp = (t_intarr *)malloc(16);

    for (int i = 0; i < src -> size; i++) {
        for (int j = i + 1; j < src -> size; j++) {
            if (src -> arr[i] == src -> arr[j]) {
                for (int k = j; k < src -> size - 1; k++)
                    src -> arr[k] = src -> arr[k + 1];
                
                src -> size--;

                if (src -> arr[i] == src -> arr[j])
                    j--;
            }
        }
    }

    if (temp) {
        temp -> size = src -> size;
        temp -> arr = mx_copy_int_arr(src -> arr, temp -> size);
        return temp;
    }

    return NULL;
}

