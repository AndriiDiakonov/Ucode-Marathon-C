#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct s_list {
    void *data; 
    struct s_list *next; 
}   t_list;

static void swap(void **s1, void **s2) {
    void *temp = *s1;
    *s1 = *s2;
    *s1 = temp;
}

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b));

#endif
