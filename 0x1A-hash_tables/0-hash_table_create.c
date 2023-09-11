#include "hash_tables.h"

/**
 * create_hash_node - function for allocating memory and creating node
 *
 * @key: string passed to hash function
 * @value: Value corresponding to key
 * Return: Pointer to hash node
 */
hash_node_t *create_hash_node(char *key, char *value)
{
hash_node_t *hash_node = malloc(sizeof(hash_node_t));
hash_node->key = malloc(sizeof(strlen(key)) + 1);
hash_node->value = malloc(sizeof(strlen(value) + 1));
strcpy(hash_node->key, key);
strcpy(hash_node->value, value);

return (hash_node);
}

/**
 * hash_table_create - Function that creates has table
 *
 * @size: Size of the array of the hash table.
 *
 * Return: returns a pointer to the newly created hash table, or NULL
 * if function fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;

hash_table_t *hash_table = (hash_table_t *) malloc(sizeof(hash_table_t));
if (hash_table == NULL)
{
printf("malloc failed\n");
exit(EXIT_FAILURE);
}
hash_table->size = size;
hash_table->array = calloc(hash_table->size,
        sizeof(hash_node_t*));
if (hash_table->array == NULL)
{
printf("calloc failed\n");
exit(EXIT_FAILURE);
}
for (i = 0; i < hash_table->size; i++)
hash_table->array[i] = NULL;

return (hash_table);
}
