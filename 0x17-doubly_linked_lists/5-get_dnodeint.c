#include "lists.h"

/**
 * get_dnodeint_at_index - a function finds a specific node
 * @head: ptr to the head of a list
 * @index: index of the node
 *
 * Return: ptr or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (a = 0; a < index; a++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
