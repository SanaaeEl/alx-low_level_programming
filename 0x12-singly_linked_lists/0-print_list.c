#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list
 * @h: element of a list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s", h->len, h->str);
		elements++;
		h = h->next;
	}
	return (elements);
}
