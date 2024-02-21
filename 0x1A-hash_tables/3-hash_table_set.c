#include "hash_tables.h"

/**
 * make_hash_node - a function to create a node
 * @key: keynode
 * @value: vlaue
 *
 * Return: node or null
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *n;

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
		return (NULL);
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (NULL);
	}
	n->value = strdup(value);
	if (n->value == NULL)
	{
		free(n->key);
		free(n);
		return (NULL);
	}
	n->next = NULL;
	return (n);
}

/**
 * hash_table_set - a function to set a key to a value
 * @ht: htable
 * @key: key
 * @value: data
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hn, *t;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	t = ht->array[index];
	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(t->value);
			t->value = new_value;
			return (1);
		}
		t = t->next;
	}
	hn = make_hash_node(key, value);
	if (hn == NULL)
		return (0);
	hn->next = ht->array[index];
	ht->array[index] = hn;
	return (1);
}
