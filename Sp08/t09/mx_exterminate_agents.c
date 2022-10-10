#include "only_smiths.h"

void mx_extermitane_agents(t_agent ***agents) {
    for (int i = 0; agents[i] != NULL; i++) {
        free((*agents)[i] -> name);
        free((*agents)[i]);
        (*agents)[i] -> name = NULL;
    }

    free(*agents);
    *agents = NULL;
}
