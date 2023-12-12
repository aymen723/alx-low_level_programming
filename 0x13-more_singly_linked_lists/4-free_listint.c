#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -a function that  frees.
 *
 * @head: the head.
 *
 * Return: NULL.
 */

void free_listint(listint_t *head)
{
	listint_t *nxt;

	while (head != NULL)
	{
		nxt = head->next;
		free(head);
		head = nxt;
	}
}
