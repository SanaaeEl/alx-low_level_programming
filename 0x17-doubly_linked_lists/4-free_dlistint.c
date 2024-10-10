#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: points to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}

}
