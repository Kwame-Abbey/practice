#include "main.h"

int _strlen(char *s);
int help(char *s, int i, int len);


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (help(s, 0, _strlen(s)));
}

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: Lenght of a string
 */

int _strlen(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * help - helper function
 * @s: string
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 or 0
 */

int help(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i <= len)
		return (1);
	return (help(s, i + 1, len - 1));
}
