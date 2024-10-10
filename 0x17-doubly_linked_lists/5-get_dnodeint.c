#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: points to the head of the list
 * @index: is the index of the node
 * Return: the nth node, NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int p = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (p == index)
			break;
		head = head->next;
		p++;
	}
	return (head);
}
