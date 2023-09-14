#include "main.h"

/**
 * more_numbers - Entry point of function
 *
 * Description: Prints number 0 to 14 ten times
 */

void more_numbers(void)
{
	int m, n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
