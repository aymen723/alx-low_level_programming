#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - a function that add a node at the beginning
 * @head: double ptr to head of the list
 * @n: value of the new node added
 *
 * Return: ptr to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;

	if (head == NULL)
		return (NULL);
	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->prev = NULL;
	a->next = *head;
	*head = a;
	if (a->next != NULL)
		(a->next)->prev = a;
	return (a);
}
