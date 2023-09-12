#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	char b[] = "_putchar";
	int m;

	for (m = 0; m < 8; ++m)
	_putchar(b[m]);
	_putchar('\n');
	return (0);

}
