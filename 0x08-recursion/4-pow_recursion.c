#include "main.h"

/**
 * _pow_recursion - Entry point of the function
 * Description: Returns the value of x raised to power y
 * @x: value to be raised
 * @y: power which the value would be raised to
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	return (0);
}

