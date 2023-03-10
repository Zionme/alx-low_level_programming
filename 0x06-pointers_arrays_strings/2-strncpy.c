#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: An input string
 * @src: An input string
 * @n: An input integer
 *
 * Return: A pointer to the output string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}

