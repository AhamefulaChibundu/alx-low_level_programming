#include "main.h"

/**
 * _memcpy - Entry point for function
 *
 * Description: Copies memory area
 *
 * @src: source location
 * @dest: destination
 * @n: Number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
