#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - check description
 * Description: it prints alphabet in lowercase 10 times, followed by new line.
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		putchar('\n');
	}
}

