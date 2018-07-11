//
// Created by Mehmet Emin Mumcu on 11.07.2018.
//
#include <stdlib.h>
#ifndef DORUK_LINKED_LIST_H
#define DORUK_LINKED_LIST_H

typedef int list_t;
typedef struct node_s {
    list_t data;
    struct node_s *next;
} node_t;


#endif //DORUK_LINKED_LIST_H
