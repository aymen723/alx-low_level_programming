#include "main.h"
/**
 * get_endianness -a function that check the end
 *
 * Return:0 if big and 1 if lil
 */
int get_endianness(void)
{
	int b;
	char *a;

	b = 1;
	a = (char *)&b;

	return (*a);
}
