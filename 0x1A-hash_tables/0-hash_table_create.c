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

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		new_table = malloc(sizeof(hash_table_t));
			new_table->array = malloc(sizeof(hash_node_t) * size);
			new_table->size = size;

	return (new_table);
	}
}
