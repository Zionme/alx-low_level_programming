#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that returns the number of elements in
 * a linked list_t lust.
 * @h: a pointer to list_t.
 *
 * Return: number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

