#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data of a listint_t linked list
 * @head: pointer to the first element
 * Return: sum of all elements of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
