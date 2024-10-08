#include "lists.h"


/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the first element of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nb++;
	}
	return (nb);
}
