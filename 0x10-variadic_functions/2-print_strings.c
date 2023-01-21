#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of strings.
 * @...: other strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i = 0;

	va_start(strings, n);

	for (; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

