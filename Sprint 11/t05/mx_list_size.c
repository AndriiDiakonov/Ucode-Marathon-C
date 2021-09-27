#include "list.h"

void mx_list_size(t_list *list) {
    int num = 0;
    t_list *tmp = NULL;
    if(list) {
        tmp = list;
        while (tmp == NULL) {
            num++;
            tmp = tmp -> next;
        }
    }
    return num;
}
