#include "main.h"

/**
 * _strlen - len of string
 * @str: ptr to string
 *
 * Return: length
 */
size_t _strlen(char *str)
{
	size_t j;

	for (j = 0; str[j]; j++)
		;
	return (j);
}

/**
 * append_text_to_file - appends text to file.
 * @filename: name
 * @text_content: NULL terminated string
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);
	if (text_content != NULL)
		len = write(a, text_content, _strlen(text_content));
	close(a);
	if (len == -1)
		return (-1);
	return (1);
}
