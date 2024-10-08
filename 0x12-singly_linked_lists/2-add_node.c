#include "lists.h"


/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the first element of the list
 * @str: string of the new element
 * Return: a pointer to the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
