#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 or any integer
 */

int _strcmp(char *s1, char *s2)
{
	int l1, l2, i;

	l1 = strlen(s1);
	l2 = strlen(s2);

	for (i = 0; ((i < l1) && (i < l2)); i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
