#include "lists.h"

/**
 * dlistint_len - counts the number of elements of a dlistint_t list
 * @h: points to the head of the linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
