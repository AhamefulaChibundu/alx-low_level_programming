#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point of function
 * Description: Locates a character in a string
 *
 * @s: The string
 * @c: The character
 * Return: A pointer to the first occourrence of c else NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
