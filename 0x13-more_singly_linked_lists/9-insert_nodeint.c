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


/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: double pointer to the first element
 * @idx: position of the new element
 * @n: data to be inserted
 * Return: pointer to the new element, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp && idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/**
	 * if temp is NULL, idx is out of bounds (greater the current list)
	 */
	if (!temp)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;

	return (new);

}
