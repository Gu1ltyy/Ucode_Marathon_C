#include "minilibmx.h"

int main(int argc, char *argv[]) {
    if(argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        exit(0);
    }

    int file = open(argv[1], O_RDONLY);
    int lenght;
    char temp[1];

    if (file < 0) {
        mx_printerr("error\n");
        exit(0);
    }
    lenght = read(file, temp, 1);
    while (lenght) {
        temp[lenght] = '\0';
        write(1, temp, 1);
        lenght = read(file, temp, 1);
    } 

    if (close(file) < 0) {
        mx_printerr("error\n");
        exit(0);
    }

    return 0;
}

