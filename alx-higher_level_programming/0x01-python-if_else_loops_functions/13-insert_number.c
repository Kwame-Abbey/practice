#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: head
 * @number: Integer
 * Return: address of new node or NULL
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (*head == NULL || (*head)->n >= new->n)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (current && current->next && current->next->n < new->n)
		current = current->next;

	new->next = current->next;
	current->next = new;
	return (new);
}
