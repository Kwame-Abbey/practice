#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to copy
 *
 * Return: Null or pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = strlen(s1);
	b = strlen(s2);
	if (n >= b)
		n = b;

	ptr = malloc((a + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	for (i = a, j = 0; i < (a + n); i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
