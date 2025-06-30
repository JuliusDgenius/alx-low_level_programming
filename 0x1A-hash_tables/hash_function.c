#include <stdio.h>

#define CAPACITY 50000

// Hash Function
unsigned long hash_function(char* str) {
    unsigned long i = 0;

    for (int j = 0; str[j]; j++) {
        i += str[j];
    }
    return i % CAPACITY;
}

// Defines Item structure
typedef struct Ht_item {
    char* key;
    char* value;
}Ht_item;

// Defines the hash table
typedef struct HashTable {
    Ht_item** items;
    int size;
    int count;
}HashTable;

// Function to create item
Ht_item* create_item(char* key, char* value) {
    Ht_item* item = (Ht_item*) malloc(sizeof(Ht_item));
    item->key = (char*) malloc(strlen(key) + 1);
    item->value = (char*) malloc(strlen(value) + 1);
    strcpy(item->key, key);
    strcpy(item->value, key);
    return item;
}

// Create the hash table by allocating memory
HashTable* create_table(int size) {
    HashTable* table = (HashTable*) malloc(sizeof(HashTable));
    table->size = size;
    table->count = 0;
    table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item*));

    for (int i = 0; i < table->size; i++) {
        table->items[i] = NULL;
    }

    return table;
}

void free_item(Ht_item* item)
{
    // Frees an item.
    free(item->key);
    free(item->value);
    free(item);
}

void free_table(HashTable* table)
{
    // Frees the table.
    for (int i = 0; i < table->size; i++)
    {
        Ht_item* item = table->items[i];

        if (item != NULL)
            free_item(item);
    }

    free(table->items);
    free(table);
}

// Print hash table
void print_table(HashTable* table) {
    printf("\nHash Table\n-------------------\n");

    for (int i = 0; i < table->size; i++) {
        if (table->items[i]) {
            printf("Index:%d, Key:%s, Value:%s", i, table->items[i] -> key, table->items[i] -> value);
        }
    }

    printf("-------------------\n\n");
}



int main() {
    unsigned long result = hash_function("JuliusDgenius");
    printf("Result: %lu\n", result);

    return 0;
}