#include "main.h"

/**
 * binary_to_uint - a func that converts a binary number.
 * @b: ptr to string.
 *
 * Return:converted nbr.
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c;

	c = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		c <<= 1;
		if (b[a] == '1')
			c += 1;
	}
	return (c);
}
