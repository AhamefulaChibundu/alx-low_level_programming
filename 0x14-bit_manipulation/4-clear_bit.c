#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index to change to zero
 * @n: unsigned long int to change
 * Return: 1 on success or -1 if an error occurres
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear_bit;

	if (index > 60 || !n)
		return (-1);
	clear_bit = 1 << index;
	*n = (*n & ~clear_bit) | ((0 << index) & clear_bit);
	return (1);
}
