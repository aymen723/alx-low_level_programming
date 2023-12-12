#include <stdio.h>
#include "lists.h"

/**
 * print_list - afunc that prints all the elements of a linked list
 * @h: pointer to the list_t list
 *
 * Return: nbr of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		num_nodes++;
		h = h->next;
	}

	return num_nodes;
}
