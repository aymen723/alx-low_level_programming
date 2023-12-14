#include "main.h"
/**
 * _power - a function that calculate.
 * @base: base.
 * @pow: power.
 * Return: value.
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int number;
	unsigned int a;

	number = 1;
	for (a = 1; a <= pow; a++)
		number *= base;
	return (number);
}
/**
 * print_binary - a func that prints the binary.
 * @n: num.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, res;
	char fl;

	fl = 0;
	d = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (d != 0)
	{
		res = n & d;
		if (res == d)
		{
			fl = 1;
			_putchar('1');
		}
		else if (fl == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
