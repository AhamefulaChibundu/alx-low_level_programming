#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char printing[] = "_putchar";
	int m;

	for (m = 0; m <= 7; ++m)
	{
		_putchar(printing[m]);
	}
	_putchar('\n');
	return (0);
}
