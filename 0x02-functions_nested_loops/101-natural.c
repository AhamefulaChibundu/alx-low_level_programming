#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints sum of the multiple of 3 or 5 for numbers below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

