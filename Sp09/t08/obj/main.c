#include "calculator.h"

int main(int argc, char *argv[]) {
    if (argv != 4) {
        write(2, "usage: ./calc [operand1] [operation] [operand2]\n",
            mx_strlen("usage: ./calc [operand1] [operation] [operand2]\n"));
        return 0;
    }

    if ((mx_atoi(argv[1]) == 0 && !(mx_strcmp(argv[1], "0") == 0))
            || (mx_atoi(argv[3]) == 0 && !(mx_strcmp(argv[3], "0") == 0))) {
        write(2, "error: invalid number\n", mx_strlen("error: invalid number\n"));
        return 0;
    }
    
    int a = mx_atoi(argv[1]), b = mx_atoi(argv[3]);
    if ((mx_strcmp(argv[2], "%") == 0 || mx_strcmp(argv[2], "/") == 0)
            && mx_strcmp(argv[3], "0") == 0) {
        write(2, "error: division by zero\n", mx_strlen("error: division by zero\n"));
        return 0;
    }

    if (mx_strcmp(argv[2], "-") == 0) {
        mx_printint(a - b);
        mx_printchar('\n');
        return 0;
    }

    if (mx_strcmp(argv[2], "*") == 0) {
        mx_printint(a * b);
        mx_printchar('\n');
        return 0;
    }

    if (mx_strcmp(argv[2], "/") == 0) {
        mx_printint(a / b);
        mx_printchar('\n');
        return 0;
    }

    if (mx_strcmp(argv[2], "%") == 0) {
        mx_printint(a % b);
        mx_printchar('\n');
        return 0;
    }

    write(2, "error: invalid operation\n", mx_strlen("error: invalid operation\n"));
    return 0;
}

