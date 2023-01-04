#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: memory area to fill
 * @b: char to fill in memory area
 * @n: number of bytes to fill
 * Return: returns pointer to mempry area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}

