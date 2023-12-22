#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main
 *
 * Return: 0.
 */
int main(int ac, char **av)
{
    ssize_t a;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    a = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", a);
    a = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", a);
    return (0);
}
