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
	int length = strlen(dest);
	int m;

	for (m = 0; m < n && *src !=  '\0'; m++)
	{
		dest[length + m] = src[m];
		src++;
	}
	dest[length + m] = '\0';
	return (dest);
}
