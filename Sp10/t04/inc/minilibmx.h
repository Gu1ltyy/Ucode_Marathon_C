#pragma once

#include "stdlib.h"
#include "unistd.h"
#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#include "errno.h"
#include "fcntl.h"

bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_more_than_two(int *total_str, int *total_sum, int *total_len);
int mx_less_than_two(int *total_str, int *total_sum, int *total_len);

