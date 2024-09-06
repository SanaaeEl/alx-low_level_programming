#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the first element
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int nb;
	listint_t *temp;

	if (!head)
		return (0);
	temp = (*head)->next;
	nb = (*head)->n;
	free(*head);
	*head = temp;
	return (nb);
}
