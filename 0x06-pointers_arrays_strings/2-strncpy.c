#include "main.h"

/**
 * _strncpy - Entry point
 *
 * Description: copy strings
 *
 * @src: string to be copied
 * @dest: destination of copied string
 * @n: number
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
