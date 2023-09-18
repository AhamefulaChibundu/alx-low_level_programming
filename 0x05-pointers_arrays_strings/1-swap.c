#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: swaps the value of two integers
 *
 * @a: first pointer to variable
 * @b: second pointer to variable
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
