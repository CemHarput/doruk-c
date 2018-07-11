//
// Created by Mehmet Emin Mumcu on 11.07.2018.
//

#include "linked_list.h"

/* Get a node from the heap */
node_t *Getnode(void) {
    node_t *node;
    node = (node_t *)malloc(sizeof(node_t));
    node->next = NULL;
    return (node);
}


void add_after(node_t *p, int item)
{
    node_t *newp;
    /* Create a new node */
    newp = Getnode();
    /* Put the data item into the new node */
    newp->data = item;
    /* Link the new node to the list */
    newp->next = p->next;
    /* Link the list to the new node */
    p->next = newp;
}

node_t *add_beginning(node_t *headp, int item)
{
    node_t *newp;
    /* Create a new node */
    newp = Getnode();
    /* Put the data item into the new node */
    newp->data = item;
    /* Link the new node to the list */
    newp->next = headp;
    /* Return the starting address of the new list */
    return (newp);
}

/* Creating a list from an array */
node_t *create_list(int ar[], int size) {
    node_t *headp, *p;
    int i;
    headp = NULL;
    headp = add_beginning(headp, ar[0]);
    p = headp;
    for (i = 1; i < size; i++) {
        add_after(p, ar[i]);
        p = p->next;
    }
    return (headp);
}

/* Creating a list from an array */
node_t *create_list2(int ar[], int size)
{
    node_t *headp;
    int i;
    headp = NULL;
    for (i = 0; i < size; i++)
        headp = add_beginning(headp, ar[i]);
    return (headp);
}

void delete_after(node_t *p, int *item)
{
    node_t *del;
    /* remember the address of the node you want to delete,
       thus the node after p */
    del = p->next;
    /* store the data in the node you want to delete in
       *item */
    *item = del->data;
    /* form the new links. link the node before the one to
       be deleted to the node that comes after it. */
    p->next = del->next;
    /* delete the node from the memory */
    free(del);
}
int delete_after2(node_t *p)
{
    node_t *del;
    /* remember the address of the node you want to delete,
       thus the node after p */
    del = p->next;
    /* store the data in the node you want to delete in
       *item */
    int item = del->data;
    /* form the new links. link the node before the one to
       be deleted to the node that comes after it. */
    p->next = del->next;
    /* delete the node from the memory */
    free(del);
    return item;
}



node_t *delete_first(node_t *headp, int *item) {
    node_t *del;
    /* Remember the address of the first node */
    del = headp;
    /* Store the data in the first node in *item */
    *item = del->data;
    /* Form the new links. HEAD must point to the second
       node. */
    headp = del->next;
    /* Delete the first node from the memory */
    free(del);
    return (headp);
}

node_t *add_end(node_t *headp, int item)
{
    node_t *p;
    /* If the list is empty, add the item at the beginning
       of the list */
    if (headp == NULL)
        headp = add_beginning(headp, item);
    else
    { /* find the address of the last node */
/* start from the beginning */
        p = headp;
/* repeat until a node that points to NULL
                 (i.e., the last node) is found */
        while (p->next != NULL)
            /* pass to the next node */
            p = p->next;
        /* add the item after that node */
        add_after(p, item);
    }
    return (headp);
}

node_t *delete_last(node_t *headp, int *item)
{
    node_t *p;
    /* Check if the list is not empty */
    if (headp != NULL)
        /* If there is only one node in the list, the last
           node is also the first node */
        if (headp->next == NULL)
            headp = delete_first(headp, item);
        else
        { /* find the address of the node before the last
                     node */
            p = headp;
            while (p->next->next != NULL)
                p = p->next;
            /* delete the node after it, thus last node */
            delete_after(p, item);
        }
    else // if the list is empty, put a dummy value in item
        *item = -987654321;
    return (headp);
}

node_t *destroy_list(node_t *headp)
{
    node_t *p;
    while (headp != NULL) {
        p = headp;
        headp = headp->next;
        free(p);
    }
    return (headp);
}