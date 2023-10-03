#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the number of arguments passed into it
 * @a: argument count
 * @c: argument vector
 * Return: 0
 */

int main(int a, char *c[])
{
	(void) c;

	printf("%d\n", a - 1);
	return (0);
}
