#include "hash_tables.h"

/**
 * shash_table_create - Function that creates has table
 *
 * @size: Size of the array of the hash table.
 *
 * Return: returns a pointer to the newly created hash table, or NULL
 * if function fails.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = malloc(sizeof(shash_table_t));
if (!ht)
return (NULL);
ht->size = size;
ht->array = calloc(size, sizeof(shash_node_t *));
if (!ht->array)
{
free(ht);
return (NULL);
}
ht->shead = NULL;
ht->stail = NULL;
return (ht);
}

/**
 * shash_table_set - adds element to the table
 *
 * @ht: The hash table
 * @key: The key
 * @value: The value to store
 * Return: return 1 on success, 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
shash_node_t *node, *new_node, *curr;

if (!ht || !key || !*key || !value)
return (0);

idx = key_index((const unsigned char *)key, ht->size);

/* Check if key exists, update value */
node = ht->array[idx];
while (node)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = strdup(value);
return (1);
}
node = node->next;
}

new_node = malloc(sizeof(shash_node_t));
if (!new_node)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[idx];
ht->array[idx] = new_node;

new_node->sprev = new_node->snext = NULL;
if (!ht->shead)
{
ht->shead = ht->stail = new_node;
}
else if (strcmp(key, ht->shead->key) < 0)
{
new_node->snext = ht->shead;
ht->shead->sprev = new_node;
ht->shead = new_node;
}
else
{
curr = ht->shead;
while (curr->snext && strcmp(curr->snext->key, key) < 0)
curr = curr->snext;
new_node->snext = curr->snext;
new_node->sprev = curr;
if (curr->snext)
curr->snext->sprev = new_node;
else
ht->stail = new_node;
curr->snext = new_node;
}
return (1);
}

/**
 * shash_table_get - Retrieves a value linked to a key
 *
 * @ht: HashTable
 * @key: Key
 *
 * Return: Pointer to a character.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *node;
unsigned long int idx;

if (!ht || !key || !*key)
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);
node = ht->array[idx];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}

/**
 * shash_table_print - prints sorted hash table items
 *
 * @ht: HashTable
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;
int comma = 0;

if (!ht)
return;
printf("{");
node = ht->shead;
while (node)
{
if (comma)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
comma = 1;
node = node->snext;
}
printf("}\n");
}

/**
 * shash_table_print_rev - prints sorted hash table items in reverse
 *
 * @ht: HashTable
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;
int comma = 0;

if (!ht)
return;
printf("{");
node = ht->stail;
while (node)
{
if (comma)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
comma = 1;
node = node->sprev;
}
printf("}\n");
}

/**
* shash_table_delete - Deletes a sorted hash table
* @ht: Hash table to delete
* Return: void
*
*/
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *node, *tmp;

if (!ht)
return;
node = ht->shead;
while (node)
{
tmp = node->snext;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
free(ht->array);
free(ht);
}
