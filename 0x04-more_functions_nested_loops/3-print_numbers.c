#include "main.h"

/**
 * print_number - a function that prints numbers from 0 to 9,
 * followed by a new line.
 * Return: 0.
 */
void print_number(void)
{
	int i = '0';
	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}

