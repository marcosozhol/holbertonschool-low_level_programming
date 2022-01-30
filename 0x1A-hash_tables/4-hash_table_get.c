#include "hash_tables.h"
/**
 *hash_table_get - retrieves a value associated with a key
 *@ht: hash table you want to look into
 *@key: key you are looking for
 *Return: value associated with the element || NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	char *new_key;
	hash_node_t *nodo;

	if (ht == NULL)
		return (NULL);

	new_key = strdup(key);
	index = key_index((unsigned char *)key, ht->size);
	nodo = ht->array[index];

	while (nodo)
	{
		if (strcmp(nodo->key, new_key) == 0)
			break;
		nodo = nodo->next;
	}
	free(new_key);

	if (nodo == NULL)
		return (NULL);

	return (nodo->value);
}
