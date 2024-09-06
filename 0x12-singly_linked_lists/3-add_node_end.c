#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first element of the linked list
 * @str: str of the new element
 * Return: pointer to the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		new->str = "(nil)";
	}
	new->len = strlen(str);
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
