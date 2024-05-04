#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head);
}
