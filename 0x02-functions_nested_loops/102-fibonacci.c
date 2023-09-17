#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the first 50 fiboacci numbers
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num1 = 1, num2 = 2;
	unsigned long int fibb;
	int i;

	printf("%lu, ", num1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", num2);
		fibb = num1 + num2;
		num1 = num2;
		num2 = fibb;
		if (i != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
