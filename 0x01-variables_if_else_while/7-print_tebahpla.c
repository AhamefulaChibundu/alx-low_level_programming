#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int lower_case_alphabets = 'z';

	while (lower_case_alphabets >= 'a')
	{
		putchar(lower_case_alphabets);
		lower_case_alphabets--;
	}
	putchar('\n');
	return (0);
}
