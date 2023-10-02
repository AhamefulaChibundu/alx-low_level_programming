#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Entry point of function
 * Description: Searches a string for any of a set of bytes
 *
 * @s: The string to search from
 * @accept: string to be searched in s
 *
 * Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
