#include "main.h"

/**
 * cap_string - Entry point of function
 *
 * Description: Capitalizes all words of a string
 *
 * @str: The string
 * s: Seperators
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int m;
	int n;
	char s[] = {',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}', ' ', '\n', '\t'};

	for (m = 0; str[m] != '\0'; m++)
	{
		if (m == 0 && str[m] >= 97 && str[m] <= 122)
		{
			str[m] = str[m] - 32;
		}
		for (n = 0; n < 13; n++)
		{
			if (str[m] == s[n])
			{
				if (str[m + 1] >= 97 && str[m + 1] <= 122)
				{
					str[m + 1] = str[m + 1] - 32;
				}
			}
		}
	}
	return (str);
}
