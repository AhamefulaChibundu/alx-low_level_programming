#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: Name to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
