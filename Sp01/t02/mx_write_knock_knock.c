#include "unistd.h"
#include "string.h"

void mx_write_knock_knock(void) {
    write(STDOUT_FILENO, "Follow the white rabbit.\n", strlen("Follow the white rabbit.\n"));
    write(STDOUT_FILENO, "Knock, knock, Neo.\n", strlen("Knock, knock, Neo.\n"));
}

