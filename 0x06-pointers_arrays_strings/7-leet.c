#include "main.h"

/**
 * leet - Entry point
 *
 * Description: Encodes a string to 1337 (leet)
 *
 * @str: string for encoding
 *
 * Return: Encoded string
 */

char *leet(char *str)
{
	char *c = "aAeEoOtTlL";
	char *d = "4433007711";
	int m, n;

	for (m = 0; str[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (str[m] == c[n])
			{
				str[m] = d[n];
			}
		}
	}
	return (str);
}

