#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index -a function that inserts a new node at a given position
 * @h:  double prt to the head of a list
 * @idx: index to where u insert a node
 * @n: data to enter
 *
 * Return: ptr or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nnew, *nxt, *curr;
	unsigned int a;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		curr = *h;
		for (a = 0; a < idx - 1 && curr != NULL; a++)
			curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	nnew = malloc(sizeof(dlistint_t));
	if (nnew == NULL)
		return (NULL);
	nnew->n = n;
	if (idx == 0)
	{
		nxt = *h;
		*h = nnew;
		nnew->prev = NULL;
	}
	else
	{
		nnew->prev = curr;
		nxt = curr->next;
		curr->next = nnew;
	}
	nnew->next = nxt;
	if (nnew->next != NULL)
		nnew->next->prev = nnew;
	return (nnew);
}
