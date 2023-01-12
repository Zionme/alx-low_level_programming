#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an arry of chars,
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: A character to initialize the array.
 * Return: If size == 0 or the function fails - NULL.
 * otherwise - a pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}

