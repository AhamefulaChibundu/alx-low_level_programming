#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: adds positive numbers
 * @a: argument count
 * @c: argument vector
 * Return: 0
 */

int main(int a, char *c[])
{
	int m, n;
	int sum = 0;

	if (a == 1)
		printf("%d\n", 0);
	else
	{
		for (m = 1; m < a; m++)
		{
			for (n = 0; c[m][n] != '\0'; n++)
			{
				if (!(isdigit(c[m][n])))
				{
					printf("Error\n");
					return (1);
				}
				else
					sum = sum + atoi(c[m]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
