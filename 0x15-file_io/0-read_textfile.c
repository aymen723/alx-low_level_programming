/*
 * File: 0-read_textfile.c
 * Auth: benmohammed.
 */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints.
 * @filename: A ptr to the file.
 * @letters: The numbers and letters.
 *
 * Return: test.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, buf, letters);
	c = write(STDOUT_FILENO, buf, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(a);

	return (c);
}
