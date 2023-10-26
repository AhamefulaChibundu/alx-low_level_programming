#include "main.h"

/**
 * get_endianness - A function that checks for endianness
 * Return: 0 for big endian and 1 for little endian
 */

int get_endianness(void)
{
	unsigned int c = 1;
	char *a = (char *)&c;

	if (*a)
		return (1);
	else
		return (0);
}
