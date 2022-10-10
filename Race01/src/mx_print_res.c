#include "header.h"

void mx_print_eq(int i, int j, int k, char *operation) {
    if (*operation == '+' && mx_add(i, j) == k) {
        mx_printint(i);
        mx_printstr(" + ");
    }
    else if (*operation == '-' && mx_sub(i, j) == k) {
        mx_printint(i);
        mx_printstr(" - ");
    }
    else if (*operation == '*' && mx_mul(i, j) == k) {
        mx_printint(i);
        mx_printstr(" * ");
    }
    else if (*operation == '/' && j != 0 && mx_div(i, j) == k) {
        mx_printint(i);
        mx_printstr(" / ");
    }
    else 
        return;
    mx_printint(j);
    mx_printstr(" = ");
    mx_printint(k);
    mx_printchar('\n');
}

bool mx_set_isBool(long long *index, long long num,
char *number, int num_length) {
    if (num > 0) 
       *index = num;

    char *str = mx_itoa(*index);
    int str_length = mx_strlen(str);
    bool isBool = true;
    for (int m = 0; m < num_length - str_length; m++) {
        if (mx_isdigit(number[m]) && number[m] != '0') {
            isBool = false;
            break;
        }
    }

    for (int m = num_length - str_length, i = 0; m < num_length; m++, i++) {
        if (number[m] != '?' && number[m] != str[i]) {
            isBool = false;
            break;
        }
    }
    free(str);
    str = NULL;
    return isBool;
}

void mx_print_res(char *num1, char *operation, char *num2, char *res) {
    int num1_length = mx_strlen(num1);
    int num2_length = mx_strlen(num2);
    int res_length = mx_strlen(res);

    if (*operation == '?') {
        mx_print_res(num1, "+", num2, res);
        mx_print_res(num1, "-", num2, res);
        mx_print_res(num1, "*", num2, res);
        mx_print_res(num1, "/", num2, res);
        return;
    }

    bool i_less_zero = false;
    bool j_less_zero = false;
    bool k_less_zero = false;

    if (num1[0] == '-') {
        num1 += 1;
        num1_length -= 1;
        i_less_zero = true;
    }
    if (num2[0] == '-') {
        num2 += 1;
        num2_length -= 1;
        j_less_zero = true;
    }
    if (res[0] == '-') {
        res += 1;
        res_length -= 1;
        k_less_zero = true;
    }

    long long first_number = mx_atoi(num1);
    long long second_number = mx_atoi(num2);
    long long third_number = mx_atoi(res);
    
    for (long long i = 0; i < mx_pow(10, num1_length); i++) {

        if (!mx_set_isBool(&i, first_number, 
        num1, num1_length)) continue;
        for (long long j = 0; j < mx_pow(10, num2_length); j++) {  

            if (!mx_set_isBool(&j, second_number, 
            num2, num2_length)) continue;
            for (long long k = 0; k < mx_pow(10, res_length); k++) {

                if (!mx_set_isBool(&k, third_number, 
                res, res_length)) continue;

                if (i_less_zero) i *= -1;
                if (j_less_zero) j *= -1;
                if (k_less_zero) k *= -1;

                mx_print_eq(i, j, k, operation);

                if (i_less_zero) i = -i;
                if (j_less_zero) j = -j;
                if (k_less_zero) k = -k;
                if (third_number > 0) break;
            }
            if (second_number > 0) break;
        }
        if (first_number > 0) break;
    }
    if (i_less_zero) num1--;
    if (j_less_zero) num2--;
    if (k_less_zero) res--; 
}

