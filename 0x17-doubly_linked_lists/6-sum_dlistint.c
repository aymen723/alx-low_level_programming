#include "lists.h"

/**
 * sum_dlistint -a function  sums all of the data of the list provieded
 * @head: pointer to head of a list
 *
 * Return: the value of summ of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
