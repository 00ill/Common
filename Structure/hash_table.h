#ifndef HASH_TABLE_H
#define HASH_TABLE_H
#include <stdlib.h>
#include <stdbool.h>

#define TABLE_SIZE 100

typedef struct SearchResult
{
    float value;
    bool found;
} SearchResult;

/// @brief Uses memory address as the key.
typedef struct Entry
{
    void *key;
    float value;
    Entry *next;
} Entry;

Entry *hash_table[TABLE_SIZE];



unsigned int hash(void *key);
SearchResult search(void *key);
void insert(void *key, float value);




#endif // HASH_TABLE_H