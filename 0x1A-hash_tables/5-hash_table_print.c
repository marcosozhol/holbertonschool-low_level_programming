#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table
 *@ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nodo;
	char *div = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		nodo = ht->array[i];
		while (nodo)
		{
			printf("%s'%s': '%s'", div, nodo->key, nodo->value);
			div = ", ";
			nodo = nodo->next;
		}
	}
	printf("}\n");
}
