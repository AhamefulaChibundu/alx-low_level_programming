#include "main.h"

/**
 * _strspn - Entry point of function
 * Description: Gests the length o a prefix substring
 *
 * @s: String to seach from
 * @accept: sting to ssearch for
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; s[m] != accept[n]; n++)
		{
			if (accept[n] == '\0')
			{
				return (m);
			}
		}
	}
	return (0);
}
