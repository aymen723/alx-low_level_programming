#include <stddef.h>
#include "lists.h"

/**
 * list_len - a func of the number of elements in a linked
 * @h: pointer of list_t list
 *
 * Return: returns the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h; n++)
		h = h->next;

	return (n);
}
