#include "list.h"

void mx_pop_index(t_list **list, int index) {
    if (!*list)
        return;

    t_list *temp = *list, *sec_temp = NULL;
    if (temp -> next = NULL || index < 1) {
        *list = temp -> next;
        free(temp);
        temp = NULL;
        return;
    }
    for (int i = 0; i < index; i++) {
        if (temp -> next == NULL)
            break;
        sec_temp = temp;
        temp = temp -> next;
    }
    sec_temp -> next = temp -> next;
    free(temp);
    temp = NULL;
    return;
}

