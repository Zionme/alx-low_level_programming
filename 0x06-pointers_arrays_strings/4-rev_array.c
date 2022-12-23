#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array.
 * @a: An input array
 * @n: Number of elements of an array
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}

