#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table you want to add or update the key/value to
 *@key: is the key
 *@value:  is the value associated with the key
 *Return: 1 | 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	unsigned long int size = 0;
	/*unsigned long int cmp;*/
	hash_node_t *nodo = malloc(sizeof(hash_node_t));

	if (!nodo)
		return (0);

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	if (ht->array[index] && strcmp(key, ht->array[index]->key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}

	nodo->key = strdup(key);
	nodo->value = strdup(value);
	nodo->next = ht->array[index];
	ht->array[index] = nodo;
	return (1);
}
