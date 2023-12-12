#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function deletes the node at index.
 * @head: double ptr.
 * @index: index.
 *
 * Return: ptr to index node.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *tempta, *nxt;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
		return (1);
	}
	tempta = *head;
	for (a = 0; a < index - 1; a++)
	{
		if (tempta->next == NULL)
			return (-1);
		tempta = tempta->next;
	}
	nxt = tempta->next;
	tempta->next = nxt->next;
	free(nxt);
	return (1);
}
