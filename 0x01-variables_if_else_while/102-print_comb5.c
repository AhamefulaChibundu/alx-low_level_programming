#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n_1 = 0;

	while (n_1 <= 99)
	{
		int n_2 = 0;

		while (n_2 <= 99)
		{
			if (n_2 != n_1)
			{
				putchar((n_1 / 10) + 48);
				putchar((n_1 % 10) + 48);
				putchar(' ');
				putchar((n_2 / 10) + 48);
				putchar((n_2 % 10) + 48);

				if (n_1 + n_2 != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++n_2;
		}
		++n_1;
	}
	putchar('\n');
	return (0);
}
