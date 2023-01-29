#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of
 * a list_t list.
 * @head: a pointer tp the head of list_t list.
 * @str: a string to be added to list_t list.
 * Return: the address of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

