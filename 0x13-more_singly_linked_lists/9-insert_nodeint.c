#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserting a new node.
 * @head: double ptr.
 * @idx: index.
 * @n: new node.
 *
 * Return: the address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temapta, *nw;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temapta = *head;
		for (a = 0; a < idx - 1 && temapta != NULL; a++)
		{
			temapta = temapta->next;
		}
		if (temapta == NULL)
			return (NULL);
	}
	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}
	nw->next = temapta->next;
	temapta->next = nw;
	return (nw);
}
