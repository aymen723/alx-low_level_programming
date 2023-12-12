#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a func that prints all elemnt.
 *
 * @h: head
 *
 * Return: the nbr of node
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
