#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees.
 * @head: a double ptr
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
	}
}
