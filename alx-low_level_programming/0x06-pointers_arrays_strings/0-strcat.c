#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; *(dest + i) != '\0'; i++)
		;

	for (; *(src + j) != '\0'; j++, i++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';

	return (dest);
}
