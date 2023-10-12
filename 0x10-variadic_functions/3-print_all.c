#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function that prints anything
 * @format: input parameter
 */
void print_all(const char * const format, ...)
{
	int m = 0;
	char *str, *separator = "";

	va_list my_list;

	va_start(my_list, format);

	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", separator, va_arg(my_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(my_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(my_list, double));
					break;
				case 's':
					str = va_arg(my_list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					m++;
					continue;
			}
			separator = ", ";
			m++;
		}
	}

	printf("\n");
	va_end(my_list);
}
