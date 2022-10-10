#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    if (!*list) {
        *list = mx_create_node(data);
        return;
    }
    if (index <= 0) {
        mx_push_front(list, data);
        return;
    }
    int count = 0;
    t_list *temp_list = *list;
    while (temp_list) {
        temp_list = temp_list -> next;
        count++;
    }
    if (index >= count) {
        mx_push_back(list, data);
        return;
    }
    t_list *temp = *list, *sec_temp = NULL;
    for (int i = 0; i < index; i++) {
        sec_temp = temp;
        temp = temp -> next;
    }
    sec_temp -> next = mx_create_node(data);
    sec_temp -> next -> next = temp;
}

