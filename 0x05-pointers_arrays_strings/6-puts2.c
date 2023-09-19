#include "main.h"
/**
 * puts2 - Entry point
 *
 * Description: Prints every other character of a string starting with first character
 * @str: string to be printed
 */

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
	}
	_putchar('\n');
}

