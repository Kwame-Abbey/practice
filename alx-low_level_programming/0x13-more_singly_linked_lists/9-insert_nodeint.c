#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index
 * @n: integer
 *
 * return: address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new;
	size_t i;

	new = malloc(sizeof(listint_t));
	if (new == NULL) return (NULL);

	new->n = n;
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL) return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
