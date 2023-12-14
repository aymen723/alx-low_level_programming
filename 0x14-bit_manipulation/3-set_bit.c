#include "main.h"

/**
 * set_bit - a function the value of a bit.
 * @index: index
 * @n: ptr to nbr i.
 * Return: 1 if worked or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	*n = *n | a;

	return (1);
}
