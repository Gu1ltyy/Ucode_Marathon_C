#include "minilibmx.h"

int main(int argc, char *argv[]) {
    char temp[1];
    int lenght;
    int file1;

    if (argc == 1) {
        lenght = read(0, temp, 1);
        while (lenght) {
            write(1, temp, 1);
            lenght = read(0, temp, 1);
        }
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        file1 = open(argv[i], O_RDONLY);
        if (file1 < 0) {
            mx_printerr("mx_cat: ");
            mx_printerr(argv[i]);
            mx_printerr(": No such file or directory\n");
            exit(0);
        }
        lenght = read(file1, temp, 1);
        while (lenght) {
            write(1, temp, 1);
            lenght = read(file1, temp, 1);
        }
        if (close(file1) < 0) {
            mx_printerr("error\n");
            exit(0);
        }
    }

    return 0;
}

