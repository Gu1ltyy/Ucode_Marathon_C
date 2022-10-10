#include "minilibmx.h"

void mx_prepare_to_print(int count_agents, char *argv[], char *arr[]) {
    t_agent **agents = (t_agent**)malloc(16 * count_agents);
    for(int i = 0; i < count_agents; i++)
        agents[i] = (t_agent*)malloc(16);

    int x = 0;
    for (int i = 0; i < count_agents; i++) {
        agents[i] -> name = arr[x++];
        agents[i] -> power = mx_atoi(arr[x++]);
        agents[i] -> strength = mx_atoi(arr[x++]);
    }

    if (mx_strcmp(argv[1], "-p") == 0) {
        for (int i = 0; i < count_agents; i++) {
            for (int j = 0; j < count_agents - 1; j++) {
                if (agents[j] -> power > agents[j + 1] -> power) {
                    t_agent temp_agent = *agents[j];
                    *agents[j] = *agents[j + 1];
                    *agents[j + 1] = temp_agent;
                }
            }
        }
            mx_print_agents(agents, count_agents);
    }
    else if (mx_strcmp(argv[1], "-s") == 0) {
        for (int i = 0; i < count_agents; i++) {
            for (int j = 0; j < count_agents - 1; j++) {
                if (agents[j] -> strength > agents[j + 1] -> strength) {
                    t_agent temp_agent = *agents[j];
                    *agents[j] = *agents[j + 1];
                    *agents[j + 1] = temp_agent;
                }
            }
        }
            mx_print_agents(agents, count_agents);
    }
        else if (mx_strcmp(argv[1], "-n") == 0) {
        for (int i = 0; i < count_agents; i++) {
            for (int j = 0; j < count_agents - 1; j++) {
                if (mx_strcmp(agents[j] -> name, agents[j + 1] -> name) > 0) {
                    t_agent temp_agent = *agents[j];
                    *agents[j] = *agents[j + 1];
                    *agents[j + 1] = temp_agent;
                }
            }
        }
            mx_print_agents(agents, count_agents);
    }

    for(int i = 0; i < count_agents; i++) {
        free(agents[i]);
        agents[i] = NULL;
    }
    free(agents);
    agents = NULL;
}
