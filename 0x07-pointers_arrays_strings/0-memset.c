#include "main.h"

/**
 * _memset - a function that fills memory with a constant bytes
 * @s: memory area to fill
 * @b: char to fill memory area with
 * @n: value of bytes to fill
 * Return: returns pointer to the memory area
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

