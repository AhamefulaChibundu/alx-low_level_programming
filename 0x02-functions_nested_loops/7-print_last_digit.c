#include "main.h"

/**
 * print_last_digit - Entry point of the function
 *
 * Description: prints the last digit of a number
 *
 * Return: Return 0
 *
 * @num: The number to be checked
 */
int print_last_digit(int num)
{
	int value;

	value = num % 10;
	if (value < 0)
	value *= -1;
	_putchar('0' + value);
	return (value);
}
