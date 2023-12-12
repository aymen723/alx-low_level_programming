#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a func frees a linked
 * @head: ptr to the list_t list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
