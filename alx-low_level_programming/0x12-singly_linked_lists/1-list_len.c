#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: head od linked list
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	for (; h != NULL; h = h->next, num++)
		;
	return (num);
}
