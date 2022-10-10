#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strenght) {
    if(agents == NULL)
        return NULL;

    t_agent **temp = agents;
    int count = 0;
    int lenght = 0;
    for (int i = 0; agents[i] != NULL; i++) {
        if (mx_strcmp(agents[i] -> name, "Smith") == 0
            && agents[i] -> strenght < strenght) {
            count++;
            lenght++;
        }
    }

    temp = (t_agent**)malloc((16 * (count + 1)));
    for (int i = 0; i < count; i++)
        temp[i] = (t_agent*)malloc(16);

    temp[count] = NULL;

    while (*agents) {
        if (mx_strcmp((*agents) -> name, "Smith") == 0
            && (*agents) -> strenght >= strenght) {
                temp[i] -> name = mx_strdup((*agents) -> name);
                temp[i] -> power = (*agents) -> power;
                temp[i] -> strenght = (*agents) -> strenght;
                i++;
        }
        agents++;
    }

    agents -= lenght;
    mx_exterminate_agents(&agents);

    return temp;
}

