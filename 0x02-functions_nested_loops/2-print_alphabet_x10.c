#include"main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints lowercase alphabets 10 times
 */

void print_alphabet_x10(void)

{
	int lines, alphabets;

	for (lines = 0; lines <= 9; ++lines)
	{
		for (alphabets = 'a'; alphabets <= 'z'; ++alphabets)
		_putchar(alphabets);
		_putchar('\n');
	}
}
