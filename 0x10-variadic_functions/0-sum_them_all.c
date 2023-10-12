#include <stdarg.h>

/**
 * sum_them_all - Sums all its parameters
 * @n: Number of parametrs to be entered
 * Return: 0 if n == 0 otherwise return the result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	int result = 0;
	va_list my_list;

	if (n == 0)
		return (0);

	va_start(my_list, n);

	for (m = 0; m < n; m++)
	{
		result = result + va_arg(my_list, int);
	}
	va_end(my_list);
	return (result);
}
