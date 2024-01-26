#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - a function that adds a node to the end
 * @head: double ptr to head of the list
 * @n: value of the new node added
 *
 * Return: ptr to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a, *t;

	if (head == NULL)
		return (NULL);
	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->next = NULL;
	if (*head == NULL)
	{
		a->prev = NULL;
		*head = a;
		return (a);
	}
	t = *head;
	while (t->next != NULL)
		t = tmp->next;
	t->next = a;
	a->prev = t;
	return (a);
}
