#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked listint_t list.
 * @h: pointer to the first element
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
