#include "main.h"
#include <string.h>

/**
 * _strncat - Entry point of function
 *
 * Description: Concatenates two strings
 *
 * @src: string to be appended
 * @dest: destination of string
 * @n: number of byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
