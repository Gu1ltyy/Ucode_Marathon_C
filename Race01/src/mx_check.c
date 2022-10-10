#include "header.h"

void mx_print_special_error(char *str, char *arg) {
    mx_printerr(str);
    mx_printerr(arg);
    mx_printerr("\n");
    exit(-1);
}

void mx_check(char *argv[], char *num1, char *operation, char *num2, char *res) {
    if (mx_strlen(operation) != 1)
        mx_print_special_error("Invalid operation: ", argv[2]);

    if (*operation != '?' && *operation != '+'
        && *operation != '-' && *operation != '*'
        && *operation != '/')
        mx_print_special_error("Invalid operation: ", argv[2]);

    if (mx_strlen(num1) < 1)
        mx_print_special_error("Invalid operand: ", argv[1]);

    if (mx_strlen(num2) < 1)
        mx_print_special_error("Invalid operand: ", argv[3]);

    for (int i = 0; i < mx_strlen(num1); i++) {
        if (i == 0 && num1[i] == '-')
            continue;
        if (!mx_isdigit(num1[i]) && num1[i] != '?')
            mx_print_special_error("Invalid operand: ", argv[1]);
    }

    for (int i = 0; i < mx_strlen(num2); i++) {
        if(num2[i] == '-' && i == 0)
            continue;
        if(num2[i] != '?' && !mx_isdigit(num2[i]))
            mx_print_special_error("Invalid operand: ", argv[3]);
    }

    if (mx_strlen(res) < 1)
        mx_print_special_error("Invalid result: ", argv[4]);

    for (int i = 0; i < mx_strlen(res); i++) {
        if (res[i] == '-' && i == 0)
            continue;
        if (!mx_isdigit(res[i]) && res[i] != '?')
            mx_print_special_error("Invalid result: ", argv[4]);
    }
}

