#include "main.h"

/**
 * _memset - Entry point of function
 *
 * Description: Fills memory with a constant byte
 *
 * @s: Area to fill with bytes
 * @b: Constant byte
 * @n: Number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
