#include "main.h"

/**
 * _isdigit - Entry point for the function
 *
 * Description: Checks to see if input is a digit
 *
 * @c: The character to be checked
 *
 * Return: Returns 1 if it is a digit and 0 if it's not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
