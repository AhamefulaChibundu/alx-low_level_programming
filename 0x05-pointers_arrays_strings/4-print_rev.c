#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: Prints a string in reverse
 *
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int b;
	int length = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		length++;
	}
	for (b = length - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
