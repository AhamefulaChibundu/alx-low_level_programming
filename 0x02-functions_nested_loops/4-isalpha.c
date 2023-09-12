#include "main.h"

/**
 * _isalpha - Entry point for the function
 *
 * @c: The character to be checked
 *
 * Description: checks to see if character is an alphabet
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 * returns 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
