#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head
 * @index: index
 *
 * Return: the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	size_t i = 0;

	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp); 
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
