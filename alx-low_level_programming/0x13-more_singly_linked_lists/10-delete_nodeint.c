#include "lists.h"

/**
 * delete_nodeint_at_index - deletes at index of a linked list
 * @head: head
 * @index: index
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head, *temp;
	size_t i;

	for (i = 0; i < (index - 1); i++)
	{
		if (cur->next == NULL) return (-1);
		cur = cur->next;
	}
	temp = cur->next;
	cur->next = temp->next;
	free(temp);
	return (1);
}
