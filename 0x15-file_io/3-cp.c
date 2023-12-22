#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check97 - checks for the correct nbr
 * @argc: nbr of args
 *
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - chcks if file exist
 * @check: true or false
 * @file: file name
 * @fd_from: file decs form
 * @fd_to: file decs
 *
 * Return: void
 */
void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check99 - cheks if file was create or not
 * @check: checks if true of false
 * @file: file name
 * @fd_from: file decs form
 * @fd_to: file decs
 *
 * Return: void
 */
void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - cheks the file decs
 * @check: true or false
 * @fd: file desc
 *
 * Return: 0
 */
void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - open content of files.
 * @argc: nbr of args
 * @argv: array of ptr
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int ff, ft, ct, cf;
	ssize_t len, lenn;
	char buf[1024];
	mode_t fp;

	check97(argc);
	ff = open(argv[1], O_RDONLY);
	check98((ssize_t)ff, argv[1], -1, -1);
	fp = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, fp);
	check99((ssize_t)ft, argv[2], ff, -1);
	len = 1024;
	while (len == 1024)
	{
		len = read(ff, buf, 1024);
		check98(len, argv[1], ff, ft);
		lenn = write(ft, buf, len);
		if (lenn != len)
			lenn = -1;
		check99(lenn, argv[2], ff, ft);
	}
	ct = close(ft);
	cf = close(ff);
	check100(ct, ft);
	check100(cf, ff);
	return (0);
}
