#ifndef B_TREE_H
#define B_TREE_H

#define MAX_KEYS 4  // max keys per B-tree node

typedef struct BTreeNode {
    int keys[MAX_KEYS];
    int num_keys;
    struct BTreeNode* children[MAX_KEYS + 1];
    bool is_leaf;
} BTreeNode;

BTreeNode* insert_btree(BTreeNode* root, int key);
BTreeNode* delete_btree(BTreeNode* root, int key);
void* search_btree(BTreeNode* root, int key);
void free_btree(BTreeNode* root);

#endif
