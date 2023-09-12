#include <unistd.h>
/**
 * main - Entry point
 *
 * Character: character to e printed using _putchar
 *
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
