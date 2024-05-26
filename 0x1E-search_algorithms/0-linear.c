#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - search  in array sorted for a value
 * @array: array
 * @size: lenght
 * @value: value
 *
 * Return: index or null -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (!array || size == 0)
		return (-1);

	while (a < size)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}

	return (-1);
}
