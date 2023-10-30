#include "main.h"

/**
 * read_textfile - Reads a textfile and prints it to the POSIX standard output
 * @letters: Number of letters to be read and printed
 * @filename: Name of the file to read
 * Return: Number of letters it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t len_r, len_w;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	len_r = read(file_d, buffer, letters);
	close(file_d);
	if (len_r == -1)
	{
		free(buffer);
		return (0);
	}
	len_w = write(STDOUT_FILENO, buffer, len_r);
	free(buffer);
	if (len_r != len_w)
		return (0);
	return (len_w);
}
