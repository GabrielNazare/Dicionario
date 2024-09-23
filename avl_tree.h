#ifndef AVL_TREE_H
#define AVL_TREE_H

#include "data_model.h"

typedef struct AVLNode {
    int key;
    void* data;
    struct AVLNode* left;
    struct AVLNode* right;
    int height;
} AVLNode;

AVLNode* insert_avl(AVLNode* node, int key, void* data);
AVLNode* delete_avl(AVLNode* root, int key);
void* search_avl(AVLNode* root, int key);
void free_avl(AVLNode* node);

#endif
