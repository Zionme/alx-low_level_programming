#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers.
 * @a: An input integer pointer
 * @b: An input integer pointer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

