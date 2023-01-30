#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to listint struct.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		head->next = tmp;
		free(head);
		head = tmp;
	}
}

