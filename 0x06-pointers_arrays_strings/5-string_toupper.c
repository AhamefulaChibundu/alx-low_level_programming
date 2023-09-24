#include "main.h"

/**
 * string_toupper - Entry point
 *
 * Description: Changes all lowercase letters of a sting to uppercase
 *
 * @str: string
 * Return: str
 */

char *string_toupper(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		if (str[m] >= 97 && str[m] <= 122)
		{
			str[m] = str[m] - 32;
		}
	}
	return (str);
}
