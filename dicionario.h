#ifndef DICIONARIO_H
#define DICIONARIO_H

#include "hash_table.h"
#include "avl_tree.h"
#include "b_tree.h"

typedef struct {
    HashTable* ht;
    AVLNode* avl;
    BTreeNode* btree;
} Dictionary;

Dictionary* create_dictionary();
void free_dictionary(Dictionary* dict);

#endif
