#include "lists.h"

/**
 * sum_listint - sum of all the data
 * @head: head
 *
 * Return: sum of all data or 0.
 */

int sum_listint(listint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
