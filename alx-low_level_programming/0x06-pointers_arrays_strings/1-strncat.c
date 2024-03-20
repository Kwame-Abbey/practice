#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = strlen(dest);

	for (; ((i < n) && (src[i] != '\0')); i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
