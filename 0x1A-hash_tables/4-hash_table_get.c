#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value linked to a key
 *
 * @ht: HashTable
 * @key: Key
 *
 * Return: Pointer to a character.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;

hash_node_t *node;

if (ht == NULL)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
