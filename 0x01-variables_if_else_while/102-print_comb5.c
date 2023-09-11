#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n_1;
	int n_2;
	int n_3;
	int n_4;

	for (n_1 = 0; n_1 <= 9; n_1++)
	{
		for (n_2 = 0; n_2 <= 9; n_2++)
		{
			putchar(n_1 + 48);
			putchar(n_2 + 48);
		}
	}
	for (n_3 = 0; n_3 <= 9; n_3++)
	{
		for (n_4 = 0; n_4 <= 9; n_4++)
		{
			putchar(n_3 + 48);
			putchar(n_4 + 48);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
