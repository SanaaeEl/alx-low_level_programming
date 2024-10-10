#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: points to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i;

	if (!h)
		return (NULL);


	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (!temp)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new;
	temp->next = new;

	return (new);
}
