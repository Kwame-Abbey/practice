#include "lists.h"

/**
 * add_new - adds a new node at the beginning of a linked list
 * @head: head
 * @str: string
 *
 * Return: Address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL) return (NULL);
	
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
