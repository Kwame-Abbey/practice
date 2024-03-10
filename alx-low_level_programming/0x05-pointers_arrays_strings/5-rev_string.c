#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i, j, len;
	char temp;

	len = _strlen(s);

	for (i = 0, j = len - 1; i <= len / 2; i++)
	{
		temp = s[i];
		s[i] = s[j - i];
		s[j - i] = temp;
	}
}
