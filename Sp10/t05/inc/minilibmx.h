#pragma once

#include "stdlib.h"
#include "unistd.h"
#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#include "errno.h"
#include "fcntl.h"

typedef struct s_agent {
    char *name;
    int power;
    int strength;
}              t_agent;

long mx_atoi(const char *str);
int mx_cout_words(const char *str, char delimiter);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_print_agents(t_agent **agents, int count);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char **mx_strsplit(char const *s, char c);
void mx_prepare_to_print(int count_agents, char *argv[], char *arr[]);
