#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char lower_case_alphabets = 'a';

	while (lower_case_alphabets <= 'z')
	{
		if ((lower_case_alphabets != 'q' && lower_case_alphabets != 'e'))
		{
			putchar(lower_case_alphabets);
		}
		lower_case_alphabets++;
	}
	putchar('\n');
	return (0);
}
