#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - a function to add a node at the end.
 *
 * @head: head
 * @n: int
 * Return: NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newer;
	listint_t *tempt;

	if (head == NULL)
		return (NULL);
	newer = malloc(sizeof(listint_t));
	if (newer == NULL)
		return (NULL);
	newer->n = n;
	newer->next = NULL;
	if (*head == NULL)
	{
		*head = newer;
		return (newer);
	}
	tempt = *head;
	while (tempt->next != NULL)
	{
		tempt = tempt->next;
	}
	tempt->next = newer;
	return (newer);
}
