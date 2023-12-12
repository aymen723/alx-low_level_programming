#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head nodes.
 * @head: a double ptr.
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *starthead;
	int res;

	if (head == NULL || *head == NULL)
		return (0);
	starthead = *head;
	*head = starthead->next;
	res = starthead->n;
	free(starthead);
	return (res);
}
