#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets the head to NULL
 * @head: double pointer to the first element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
