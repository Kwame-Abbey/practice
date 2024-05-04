#include "lists.h"

/**
 * print_list - prints all the elements in a linked list
 * @h: head
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL) return (n);

	while (h != NULL)
	{
		n++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}

	return (n);
}
