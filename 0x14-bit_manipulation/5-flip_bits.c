#include "main.h"
/**
 * flip_bits - a function that flip to get from one.
 * @n: the first nbr.
 * @m: the second nbr.
 * Return: the nbr of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int a, b;

	a = 0;
	res = 1;
	diff = n ^ m;
	for (b = 0; b < (sizeof(unsigned long int) * 8); b++)
	{
		if (res == (diff & res))
			a++;
		res <<= 1;
	}

	return (b);
}
