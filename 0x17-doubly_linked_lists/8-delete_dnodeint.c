#include "lists.h"

/**
 * delete_dnodeint - deletes the node at index of a dlistint_t linked list
 * @head: points to the head of the list
 * @index: the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		(*head)->prev = NULL;
		free(node);
		return (1);
	}

	for (i = 0; i < index && node; i++)
		node = node->next;
	if (!node)
		return (-1);
	if (node->next == NULL)
	{
		node->prev->next = NULL;
		free(node);
		return (1);
	}
	node->next->prev = node->prev;
	node->prev->next = node->next;
	free(node);
	return (1);
}
