#include "lists.h"


/**
 * list_len - counts the number of elements in a linked list_t list
 * @h: element of a linked list
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t nb = 0;

	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
