#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t lined list
 * @head: pointer to the first element
 * @index: index in question
 * Return: nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	while (head)
	{
		temp = head->next;
		if (i == index)
			return (head);
		i++;
		head = temp;
	}
	return (NULL);
}
