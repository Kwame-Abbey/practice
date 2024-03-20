#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destinatio
 * @src: source
 * @n: integer
 *
 * Return: Pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
