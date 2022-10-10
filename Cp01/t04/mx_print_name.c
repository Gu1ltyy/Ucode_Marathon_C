#include "unistd.h"

int main(int argc, char *argv[]) {
    char temp = argc + 48;

    for (int i = 0; argv[0][i] != '\0'; i++)
        write(1, &argv[0][i], 1);
    write(1, '\n', 1);
    write(1, &temp, 1);
    write(1, '\n', 1);

    return 0;
}

