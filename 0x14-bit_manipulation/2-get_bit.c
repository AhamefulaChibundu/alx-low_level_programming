#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: is the index of bit to be printed
 * @n: is unsigned long int number
 * Return: return index else return -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 60)
		return (-1);
	return ((n >> index) & 1);
}
