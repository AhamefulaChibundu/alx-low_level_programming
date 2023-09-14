#include "main.h"

/**
 * print_line - Entry point of function
 *
 * Description: prints a line
 *
 * @n: epresent the length of `line needed to be printed
 *
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
