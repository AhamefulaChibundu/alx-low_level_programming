#include "main.h"

/**
 * _puts - Entry point of function
 *
 * Description: prints a string followed by a new line
 *
 * @str: the string to be printed
 */

void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
