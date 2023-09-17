#include <stdio.h>

/**
 * main - Entry poin
 * Description: prints sum of even fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int fibb;
	int even_fibb = 2;

	while (fibb <= 4000000)
	{
		fibb = num1 + num2;
		if (fibb % 2 == 0)
		{
			even_fibb = even_fibb + fibb;
		}
		num1 = num2;
		num2 = fibb;
	}
	printf("%d\n", even_fibb);
	return (0);
}
