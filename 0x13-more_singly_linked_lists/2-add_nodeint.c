#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - a function that adds a new node at beginning
 * of a listint list.
 * @head: pointer to the address of listint.
 * @n:integer for the new node.
 *
 * Return: the address of the new element or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

