#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: 0.
 */
void print_number(int n)
{
	if (n == 0)
		putchar('0');
	else if (n < 0)
	{
		putchar('-');
		print_number(n * -1);
	}
	else
		print_number(n);
}

