#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints it's name followed by a new line
 * @a: argc (argument count)
 * @c: argv (argument vector or value)
 * Return: 0
 */

int main(int a, char *c[])
{
	(void) a;

	printf("%s\n", c[0]);
	return (0);
}
