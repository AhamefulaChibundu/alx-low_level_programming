#include "main.h"

/**
 * rev_string - Entry point of function
 *
 * Description: Reverses a string
 *
 * @s: The string to be reversed
 */

void rev_string(char *s)
{
	int b;
	int length = 0;
	char c;

	for (b = 0; s[b] != '\0'; b++)
	{
		length++;
	}
	for (b = 0; b < length / 2; b++)
	{
		c = s[b];
		s[b] = s[length - 1 - b];
		s[length - 1 - b] = c;
	}
}
