#include "lists.h"

/**
 * add_nodeint_end - a function that adds new node at the end of
 * a listint_t list.
 * @head: a pointer to listint -t struct.
 * @n: an integr.
 * Return: the address of the new element or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}

