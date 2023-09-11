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

	for (number_1  = 48; number_1 <= 57; number_1++)
	{
		for (number_2 = 48; number_2 <= 57; number_2++)
		{
			if ((number_1 != number_2) && (number_1 < number_2))
			{
				putchar(number_1);
				putchar(number_2);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
