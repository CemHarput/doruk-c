//
// Created by Mehmet Emin Mumcu on 13.07.2018.
//

#include "binary-search-tree.h"


bnode_t *getBinaryNode(BType key) {

    bnode_t *node = (bnode_t *) malloc(sizeof(bnode_t));
    node->leftchild = NULL;
    node->rightchild = NULL;
    node->data = key;
    return (node);
}


bnode_t *insert(bnode_t *root, BType key) {
    if (root == NULL) {
        root = getBinaryNode(key);
        return root;
    }

    if (root->data > key)
        // go left
        root->leftchild = insert(root->leftchild, key);
    else
        // go right
        root->rightchild = insert(root->rightchild, key);
}

bnode_t *search(bnode_t *root, BType key) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == key)
        return root;

    if (root->data > key)
        // go left
        return search(root->leftchild, key);
    else {
        // go right
        return search(root->rightchild, key);
    }

}


void inorder(bnode_t *root) {
    if (root != NULL) {
        inorder(root->leftchild);
        printf("%d ", root->data);
        inorder(root->rightchild);
    }
}

void preorder(bnode_t *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->leftchild);
        preorder(root->rightchild);
    }
}

void postorder(bnode_t *root) {
    if (root != NULL) {
        postorder(root->leftchild);
        postorder(root->rightchild);
        printf("%d ", root->data);
    }
}


void bst_test() {
    bnode_t *head = NULL;
    head = insert(head, 10);
    insert(head, 5);
    insert(head, 3);
    insert(head, 2);
    insert(head, 4);
    insert(head, 11);
    insert(head, 14);
    insert(head, 16);
    insert(head, 12);
    inorder(head);
    printf("\n");
    preorder(head);
    printf("\n");
    postorder(head);

    printf("\n");
    printf("%d\n", search(head, 4) != NULL);
    printf("%d\n", search(head, 16) != NULL);
    printf("%d\n", search(head, 12) != NULL);
    printf("%d\n", search(head, 21) != NULL);
}


