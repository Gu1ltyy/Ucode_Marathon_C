#pragma once

#include "stdio.h"
#include "stdlib.h"
#include "agent.h"

t_agent *mx_create_agent(char *name, int power, int strenght);
t_agent **mx_only_smiths(t_agent **agents, int strenght);
void mx_exterminate_agents(t_agent ***agents);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

