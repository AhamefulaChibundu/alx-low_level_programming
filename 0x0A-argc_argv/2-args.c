#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all arguments it receives
 * @a: argument count
 * @c: argument vector
 * Return: 0
 */

int main(int a, char *c[])
{
	int m;

	for (m = 0; m < a; m++)
	{
		printf("%s\n", c[m]);
	}
	return (0);
}
