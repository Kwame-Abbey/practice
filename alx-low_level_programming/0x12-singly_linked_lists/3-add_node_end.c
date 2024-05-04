#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head
 * @str: string
 *
 * Return: address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL) return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (; temp->next != NULL; temp = temp->next)
		;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
