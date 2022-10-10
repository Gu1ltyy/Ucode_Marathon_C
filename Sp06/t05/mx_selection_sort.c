int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
int mx_selection_sort(char **arr, int size) {
    char * temp;
    int count = 0;
    int num;
    int j;

    for (int i = 0; i < size - 1; i++) {
        num = i;
        for (j = i + 1; j < size; j++) {
            if (mx_strlen(arr[j]) < mx_strlen(arr[num]))
                num = j;
            else if (mx_strlen(arr[j]) == mx_strlen(arr[num])
                    && mx_strcmp(arr[j], arr[j + 1]) > 0)
                    num = j;
        }

        if (num != i) {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            count++;
        }
    }

    return count;
}

