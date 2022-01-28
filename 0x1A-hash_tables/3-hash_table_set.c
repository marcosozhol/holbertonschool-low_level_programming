#include "hash_tables.h"
/*
 *hash_table_set - adds an element to the hash table
 *@ht: hash table you want to add or update the key/value to
 *@key: is the key
 *@value:  is the value associated with the key
 *Return: 1 | 0
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nodo;

	if (ht == NULL)
	{
		return (0);
	}

	nodo = malloc(sizeof(hash_node_t));
	if (nodo == NULL)
	{
		return (0);
	}

	nodo->key = strdup(key);
	nodo->value = strdup(value);

	return (1);
}
