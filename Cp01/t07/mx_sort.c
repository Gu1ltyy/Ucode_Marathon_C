#include "stdbool.h"
#include "stdlib.h"

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    int temp;

    if (arr == NULL)
        return;
    if (size < 1)
        return;
    if (f == NULL)
        return;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (f(arr[j], arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

