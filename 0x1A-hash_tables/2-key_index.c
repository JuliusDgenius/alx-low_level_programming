#include "hash_tables.h"

/**
 * key_index - Gives the index of a key passed to it
 *
 * @key: The key which index to return
 * @size: The size of the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index;

    index = hash_djb2(key);
    return (index % size);
}
