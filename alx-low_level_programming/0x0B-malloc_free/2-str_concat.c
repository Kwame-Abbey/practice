#include "main.h"
#include "string.h"

/**
 * str_concat = concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strcat(ptr, s2);

	return (ptr);
}
