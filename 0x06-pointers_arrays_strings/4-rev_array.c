#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Description: Reverses the content of an array of integers
 *
 * @a: Array of integers
 * @n: number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c;
	int d;

	for (c = 0; c < n / 2; c++)
	{
		d = a[c];
		a[c] = a[n - 1 - c];
		a[n - 1 - c] = d;
	}
}
