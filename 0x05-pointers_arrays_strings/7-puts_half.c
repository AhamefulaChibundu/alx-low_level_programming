#include "main.h"

/**
 * puts_half - Entry point of function
 *
 * Description: prints half of a string
 *
 * @str: The string to be printed
 */

void puts_half(char *str)
{
	int s, n;
	int length = 0;

	for (s = 0; str[s] != '\0'; s++)
	{
		length++;
	}
	n = (length - 1) / 2;
	for (s = n + 1; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
