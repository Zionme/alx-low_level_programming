#include "main.h"
#include <stdio.h>

/**
 * _islower - check description
 * @c: An input character
 * Description: prints alphabets 10 times in lowercase, followed by new line.
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

