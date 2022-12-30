#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - check description
 * Description: it prints the alphabet in lowercase, followed by a new line.
 * Return: 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}

