#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int m;

	if (separator == NULL)
		printf("%s", separator);

	va_start(numbers, n);

	for (m = 0; m < n; m++)
	{
		printf("%d%s", va_arg(numbers, unsigned int), separator);
	}
	va_end(numbers);

	printf("\n");
}
