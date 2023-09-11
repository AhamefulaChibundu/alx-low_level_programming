#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwasy 0
 */

int main(void)
{
	int number_1;
	int number_2;
	int number_3;

	for (number_1  = 0; number_1 <= 9; number_1++)
	{
		for (number_2 = 0; number_2 <= 9; number_2++)
		{
			for (number_3 = 0; number_3 <= 9; number_3++)
			{
				if (number_1 != number_2 && number_2 != number_3 && number_1 < number_2 && number_2 < number_3)
				{
					putchar(number_1 + 48);
					putchar(number_2 + 48);
					putchar(number_3 + 48);
					if (number_2 + number_1 + number_3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
