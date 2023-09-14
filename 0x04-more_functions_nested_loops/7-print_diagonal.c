#include "main.h"

/**
 * print_diagonal - Entry poiont of the function
 *
 * Description: Prints a diagonal line
 *
 * @n: represents length of the line
 *
 */

void print_diagonal(int n)
{
	int a, space, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{
			b = a - 1;

			for (space = 0; space <= b; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
