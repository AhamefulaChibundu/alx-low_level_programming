#include "main.h"

/**
 * _strlen - main entry point
 * Description: finds the length of a string
 * @str: pointer to the string
 * Return: the length of the string
 */

size_t _strlen(char *str)
{
	size_t m;

	for (m = 0; str[m]; m++)
		;
	return (m);
}

/**
 * create_file - A function that creates a file
 * @text_content: NULL terminated string to write to the file
 * @filename: Name of the file to created
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
		len = write(file_d, text_content, _strlen(text_content));
	close(file_d);
	if (len == -1)
		return (-1);
	return (1);
}
