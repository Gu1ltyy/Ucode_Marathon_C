#include "minilibmx.h"

int main(int argc, char *argv[]) { 
    if (argc != 3) {
        mx_printerr("usage: ./parse_agents [-p | -s | -n] [file_name]\n");
        exit(0);
    }
    if (mx_strcmp(argv[1], "-p") != 0 && mx_strcmp(argv[1], "-s") != 0 && mx_strcmp(argv[1], "-n") != 0) {
        mx_printerr("usage: ./parse_agents [-p | -s | -n] [file_name]\n");
        exit(0);
    }

    int count_array = 0;
    int count_agents = 0;
    char buffer;
    char sec_buffer;
    bool issp = false;

    int file = open(argv[2], O_RDONLY);
    if (file < 0) {
        mx_printerr("error\n");
        exit(0);
    }
    while (read(file, &buffer, 1)) {
        if (buffer == '{')
            count_agents++;
    }
    if (close(file) < 0) {
        mx_printerr("error\n");
        exit(0);
    }

    char *temp = mx_strnew(100);
    int ind = 0;

    file = open(argv[2], O_RDONLY);
    if (file < 0) {
        mx_printerr("error\n");
        exit(0);
    }

    while(read(file, &buffer, 1)) {
        if (issp && buffer != '\n') {
            temp[ind++] = buffer;          
        }
        if (issp && buffer == '\n') {
            issp = false;
            temp[ind++] = ' ';
        }
        if (buffer == ' ' && sec_buffer == ':') issp = true;
        sec_buffer = buffer;
    }
    if (close(file) < 0) {
        mx_printerr("error\n");
        exit(0);
    }

    char **arr = mx_strsplit(temp, ' ');
    while(*arr) {
        count_array++;
        arr++;
    }
    arr -= count_array;

    mx_prepare_to_print(count_agents, argv, arr);

    count_array = 0;
    while (arr[count_array] != NULL) {
        free(arr[count_array++]);
        arr[count_array++] = NULL;
    }
    free(arr);
    arr = NULL;
    free(arr);
    arr = NULL;
    free(temp);
    temp = NULL;

    return 0;
}
