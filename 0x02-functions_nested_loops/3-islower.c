#include "main.h"
#include <stdio.h>

/**
 * _islower - check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times, followed by a new line.
 * Return: 1 if c is lowercase or 0 if otherwise.
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}

