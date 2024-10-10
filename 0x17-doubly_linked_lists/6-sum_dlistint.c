#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: points to the head of the list
 * Return: the sum of all the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
