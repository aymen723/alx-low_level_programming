#include "hash_tables.h"

/**
 * hash_table_print - print htabme
 * @ht: htable
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *t;
	char f = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		t = ht->array[i];
		while (t != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", t->key, t->value);
			f = 1;
			t = t->next;
		}
	}
	printf("}\n");
}
