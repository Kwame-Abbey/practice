#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 */

void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	} else
	{
		for (i = (len - 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
