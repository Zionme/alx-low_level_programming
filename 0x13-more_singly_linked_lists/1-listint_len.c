#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function thatreturns the number of elements
 * in a linked listint_t list.
 * @h: a pointer to listint_t struct
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

