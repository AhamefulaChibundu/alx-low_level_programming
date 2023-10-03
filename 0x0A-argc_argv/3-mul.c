#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: multiplies two numbers passed as argument
 * @a: argument count
 * @c: argument vector
 * Return: return 1 if it's not two numbers, otherwise return 0
 */

int main(int a, char *c[])
{
	int num1, num2, mul = 0;

	if (a != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(c[1]);
		num2 = atoi(c[2]);

		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
