#include"main.h"

/**
 * times_table - Entry point for function
 *
 * Description: prints the 9 times table
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);

		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;
			/**
			 * put a space if the product i a single number
			 * place the first digit first if its two numbers
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*gives the first digit*/
			_putchar((prod % 10) + 48); /*gives the second digit*/
		}
		_putchar('\n');
	}
}
