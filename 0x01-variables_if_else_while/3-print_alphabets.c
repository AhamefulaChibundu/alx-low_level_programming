#include <stdio.h>

/**
 * main -Entry pint
 *
 * Return: Always 0
 */

int main(void)
{
	char lower_case_alphabets = 'a';
	char upper_case_alphabets = 'A';

	while (lower_case_alphabets <= 'z')
	{
		putchar(lower_case_alphabets);
		lower_case_alphabets++;
	}
	while (upper_case_alphabets <= 'Z')
	{
		putchar(upper_case_alphabets);
		upper_case_alphabets++;
	}
	putchar('\n');
	return (0);
}
