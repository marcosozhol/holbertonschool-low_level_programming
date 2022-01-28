#include "hash_tables.h"
/**
 *hash_table_create - Create a new table
 *@size: size new table
 *Return: pointer to new table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}

	if (size < 1)
	{
		return (NULL);
	}
	else
	{
			new_table->array = malloc(sizeof(hash_node_t) * size);
	}

	if (new_table->array == NULL)
	{
		return (NULL);
	}
	memset(new_table->array, 0, size * sizeof(hash_node_t));

	new_table->size = size;

	return (new_table);
}
