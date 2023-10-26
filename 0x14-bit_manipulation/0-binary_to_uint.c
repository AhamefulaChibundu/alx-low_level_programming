#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: The converted number
 * or Return 0 if there is one or more char in string b not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int value, converted_num;

	if (b == NULL)
		return (0);
	for (m = 0; b[m] != '\0'; m++)
		;
	for (value = 1, converted_num = 0; m > 0; m--)
	{
		if (b[m - 1] == '1')
		{
			converted_num += value;
			value *= 2;
			continue;
		}
		else if (b[m -1] == '0')
		{
			value *= 2;
			continue;
		}
		else
			return (0);
	}
	return (converted_num);
}
