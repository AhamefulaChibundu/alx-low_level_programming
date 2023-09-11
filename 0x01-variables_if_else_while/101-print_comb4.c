#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwasy 0
 */

int main(void)
{
	int n_1;
	int n_2;
	int n_3;

	for (n_1  = 0; n_1 <= 9; n_1++)
	{
		for (n_2 = 0; n_2 <= 9; n_2++)
		{
			for (n_3 = 0; n_3 <= 9; n_3++)
			{
				if (n_1 != n_2 && n_2 != n_3 && n_1 < n_2 && n_2 < n_3)
				{
					putchar(n_1 + 48);
					putchar(n_2 + 48);
					putchar(n_3 + 48);
					if (n_2 + n_1 + n_3 != 24)
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
