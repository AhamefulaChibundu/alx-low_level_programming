#include "main.h"

/**
 * _abs - Entry point of function
 *
 * Return: Always 0
 *
 * Description: a function to print absolute value of integers
 *
 * @num: Number to check for absolute value
 */

int _abs(int num)
{
	if (num < 0)
	num = num * (-1);
	return (num);
}
