#include "hash_tables.h"

/**
 * hash_djb2 - djb2
 * @str: string
 *
 * Return:value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int b;

	h = 5381;
	while ((b = *str++))
	{
		h = ((h << 5) + h) + b;
	}
	return (h);
}
