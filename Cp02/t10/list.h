#pragma once

#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

t_list *mx_create_node(void *data);

