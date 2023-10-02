#include "main.h"

/**
 * _islower - Entry point for function
 *
 * Description: checks for a lowercase alphabet
 *
 * @c: the character to be checked
 *
 * Return: Returns 1 if c is lowercase
 * and returns 0 if c is not lowercase
 */

int _islower(int c)
{
	if ((c >= 90) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
