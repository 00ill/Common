#include "Structure/hash_table.h"

unsigned int hash(void *key)
{
    return ((unsigned long)key) % TABLE_SIZE;
}

SearchResult search(void *key)
{
    unsigned int index = hash(key);
    Entry *entry = hash_table[index];
    SearchResult result;
    result.found = 0;

    while (entry)
    {
        if (entry->key == key)
        {
            result.value = entry->value;
            result.found = true;
            return result;
        }
        entry = entry->next;
    }
    result.found = false;
    return result;
}

void insert(void *key, float value)
{
    unsigned int index = hash(key);
    SearchResult result = search(key);
    if (result.found == true)
    {
        Entry *entry = hash_table[index];
        while (entry)
        {
            if (entry->key == key)
            {
                entry->value = value;
                return;
            }
            entry = entry->next;
        }
    }
    else if (result.found == false)
    {
        Entry *new_entry = (Entry *)malloc(sizeof(Entry));
        if(new_entry == NULL)
        {
            return;
        }
        new_entry->key = key;
        new_entry->value = value;
        new_entry->next = hash_table[index];
        hash_table[index] = new_entry;
    }
}