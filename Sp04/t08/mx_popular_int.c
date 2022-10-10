#include <stdio.h>
#include <unistd.h>

int mx_popular_int(const int *arr, int size) {
    int most = 0;
    int tempCount = 1;
    int count = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1])
            tempCount++;
        else {
            if (tempCount > count) {
                count = tempCount;
                most = arr[i - 1];
            }
            tempCount = 1;
        }
    }

    if (tempCount > count) {
        count = tempCount;
        most = arr[size - 1];
    }

    return most;
}
