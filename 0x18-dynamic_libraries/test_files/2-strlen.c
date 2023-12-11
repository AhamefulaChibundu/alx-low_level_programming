#include "main.h"

/**
 * _strlen - Entry point of function
 *
 * Description: returns the length of a string
 *
 * @s: the string
 *
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
