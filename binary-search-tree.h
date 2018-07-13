//
// Created by Mehmet Emin Mumcu on 13.07.2018.
//

#ifndef DORUK_BINARY_SEARCH_TREE_H
#define DORUK_BINARY_SEARCH_TREE_H


#include <stdlib.h>
#include <stdio.h>

typedef int BType;
typedef struct node {
    BType data;
    struct node *leftchild;
    struct node *rightchild;
} bnode_t;

bnode_t *insert(bnode_t *root, BType key);

bnode_t *search(bnode_t *root, BType key);

void inorder(bnode_t *root);

void preorder(bnode_t *root);

void postorder(bnode_t *root);


void bst_test();


#endif //DORUK_BINARY_SEARCH_TREE_H
