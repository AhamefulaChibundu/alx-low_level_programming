#include "main.h"

/**
 * _strlen - Finds the length of a string
 * @str: Pointer to the string
 * Return: Length of the string
 */

size_t _strlen(char *str)
{
	size_t m;

	for (m = 0; str[m]; m++)
		;
	return (m);
}

/**
 * append_text_to_file - Appends a text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
		len = write(file_d, text_content, _strlen(text_content));
	close(file_d);
	if (len == -1)
		return (-1);
	return (1);
}
