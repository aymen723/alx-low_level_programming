#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a func that adds a new node
 * @head: double pointer
 * @str: new str to add in the node
 *
 * Return: the address of the new elem
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}

	return (new);
}
