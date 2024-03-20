#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String
 * @c: character
 *
 * Return: Pointer to first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}
