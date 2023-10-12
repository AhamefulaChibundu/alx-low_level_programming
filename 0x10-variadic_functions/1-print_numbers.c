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

	va_start(numbers, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);

	printf("\n");
}
