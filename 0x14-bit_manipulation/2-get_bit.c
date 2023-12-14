#include "main.h"

/**
 * get_bit - a func that returns the value.
 * @n: chk bit.
 * @index: bit.
 *
 * Return: the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, re;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	re = n & d;
	if (re == d)
		return (1);

	return (0);
}
