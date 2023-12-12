#include "lists.h"

/**
 * listint_len -the function that the number of elements in a linked list.
 *
 * @h: head ptr
 *
 * Return: the count .
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	h = h->next;
		counter++;
	}
	return (counter);
}
