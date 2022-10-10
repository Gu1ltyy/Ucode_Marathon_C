#ifndef HEADER_H
#define HEADER_H

#include "stdbool.h"
#include "unistd.h"
#include "stdlib.h"

long long mx_atoi(const char *str);
void mx_check(char *argv[], char *num1, char *operation, char *num2, char *res);
char *mx_itoa(long long number);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int num);
void mx_printstr(const char *s);
void mx_printerr(const char *s);
void mx_print_special_error(char *str, char *arg);
void mx_print_res(char *num1, char *operation, char *num2, char *res);
char *mx_strtrim(const char *str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
int mx_add(int a, int b);
int mx_sub(int a, int b);
int mx_mul(int a, int b);
int mx_div(int a, int b);
int mx_mod(int a, int b);
double mx_pow(double n, unsigned int pow);
int main(int argc, char **argv);

#endif

