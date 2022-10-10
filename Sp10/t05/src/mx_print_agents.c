#include "minilibmx.h"

void mx_print_agents(t_agent **agents, int count) {
    for(int i = 0; i < count; i++) {
        mx_printstr("agent: ");
        mx_printstr(agents[i] -> name);
        mx_printstr(", power: ");
        mx_printint(agents[i] -> power);
        mx_printstr(", strenght: ");
        mx_printint(agents[i] -> strength);
        mx_printchar('\n');
    }
}
