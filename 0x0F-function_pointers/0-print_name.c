#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - a function that prints a name.
 * @name: the name to be printed.
 * @f: a pointer to a function name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

