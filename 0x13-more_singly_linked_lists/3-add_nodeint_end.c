#include "lists.h"


/**
 * add_nodeint_end - adds a new node at end of a listint_t list
 * @head: pointer to the first element of the list
 * @n: integer of the new element
 * Return: pointer to the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
