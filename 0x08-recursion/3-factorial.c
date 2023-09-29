#include "main.h"

/**
 * factorial - Entry point of function
 * Description: returns the factorial of a given number
 * @n: the given number
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
