#include "hash_tables.h"

/**
 * hash_table_create - htable
 * @size: size
 *
 * Return: ptr to new htable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int a;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = malloc(size * sizeof(hash_node_t *));
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	for (a = 0; a < size; a++)
		htable->array[a] = NULL;
	return (htable);
}
