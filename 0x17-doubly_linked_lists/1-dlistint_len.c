#include "lists.h"

/**
 * dlistint_len - this function count the nbr of nodes in a list
 * @h: ptr to head of a list
 *
 * Return: nodes nbr
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
		h = h->next;
	return (a);
}
