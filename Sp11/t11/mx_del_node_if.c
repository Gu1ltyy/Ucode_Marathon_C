#include "list.h"

void mx_delete_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
    if (*list == NULL || list == NULL || cmp == NULL || del_data == NULL)
        return;

    t_list *temp = *list, *sec_temp = *list;
    while (temp) {
        if (cmp(temp -> data, del_data)) {
            if (*list == temp) {
                *list = temp -> next;
                free(temp);
                temp = *list;
                continue;
            }
            sec_temp -> next = temp -> next;
            free(temp);
            temp = sec_temp -> next;
            return;
        }
        sec_temp = temp;
        temp = temp -> next;
    } 
}

