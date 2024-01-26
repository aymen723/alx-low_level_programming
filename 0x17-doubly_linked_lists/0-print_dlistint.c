#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - a function that print the elements of a  list
 * @h: prt to the start of a list
 *
 * Return: nbr of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
