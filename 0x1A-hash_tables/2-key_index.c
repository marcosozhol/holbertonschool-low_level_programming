#include "hash_tables.h"
/**
 *key_index - gives you the index of a key
 *@key: is the key
 *@size: is the size of the array of the hash table
 *Return: index at which the key/value | NULL
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
	{
		return (0);
	}

	else
	{
		return (hash_djb2(key) % size);
	}
}
