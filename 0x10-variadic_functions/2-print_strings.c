#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings
 * @separator: A string to be printed between the strings
 * @n: The number of string passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int m;
	char *str;

	va_start(strings, n);

	for (m = 0; m < n; m++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && m != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
