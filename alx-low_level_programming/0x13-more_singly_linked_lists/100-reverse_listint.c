#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head
 *
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = *head, *prev = NULL, *next;

	while (cur->next != NULL)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*head = prev;
	return (*head);
}
