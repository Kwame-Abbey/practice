#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
