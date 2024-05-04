#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: head
 * @n: integer
 *
 * Return: Address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL) return (NULL);

	new->n = n;
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
