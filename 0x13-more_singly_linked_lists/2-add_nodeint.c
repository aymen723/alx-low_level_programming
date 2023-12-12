#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - aadd a node at begin.
  *
  * @head: head 
  * @n: int added
  * Return: NUll
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointer;

	if (head == NULL)
		return (NULL);
	pointer = malloc(sizeof(listint_t));
	if (pointer == NULL)
		return (NULL);
	pointer->n = n;
	pointer->next = *head;
	*head = pointer;
	return (pointer);
}
