#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first element of the linked list
 * @str: str of the new element
 * Return: pointer to the element
 */

list_t *add_node_end(ist_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	while (head)
	{
		if (!head->next)
			*head->next = new;
		head->next = head;
	}
	return (new);
}
