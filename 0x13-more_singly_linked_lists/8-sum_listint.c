#include "lists.h"

/**
 * sum_listint - a function that sum of all the data .
 * @head: ptr to fnode.
 *
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	int res = 0;

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
