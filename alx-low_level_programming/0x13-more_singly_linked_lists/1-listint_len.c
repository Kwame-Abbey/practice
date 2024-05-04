#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: head
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	for (; h != NULL; h = h->next, num++)
		;
	return (num);
}
