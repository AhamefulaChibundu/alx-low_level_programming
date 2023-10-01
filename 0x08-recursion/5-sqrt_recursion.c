#include "main.h"

/**
 * _sqrt_recursion - Entry point of function
 * Description: returns square root of a number
 * @n: number to be squarerooted
 * @c: the counter
 * Return: sqrt
 */

int perfect_root(int n, int c);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (perfect_root(n, 0));
}

/**
 * perfect_root - finds natural squareroot of a numher
 * @c: the counter
 * @n: number inputed
 * Return: sqrt
 */

int perfect_root(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (perfect_root(n, c + 1));
}
