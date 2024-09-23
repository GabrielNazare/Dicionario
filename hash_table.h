#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdlib.h>
#include <stdbool.h>

#define TABLE_SIZE 100

typedef struct HashNode {
    int key;
    void* data;
    struct HashNode* next;
} HashNode;

typedef struct {
    HashNode* buckets[TABLE_SIZE];
} HashTable;

HashTable* create_hash_table();
bool insert_hash(HashTable* ht, int key, void* data);
void* search_hash(HashTable* ht, int key);
bool delete_hash(HashTable* ht, int key);
void free_hash_table(HashTable* ht);

#endif
