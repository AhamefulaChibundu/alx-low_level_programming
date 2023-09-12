#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry point for the function
 *
 * Description: Function to print the lowercase alphabets
 */

void print_alphabet(void)
{
	int lower_case_alphabets = 'a';

	while (lower_case_alphabets <= 'z')
	{
		_putchar(lower_case_alphabets);
		lower_case_alphabets++;
	}
	_putchar('\n');
}
