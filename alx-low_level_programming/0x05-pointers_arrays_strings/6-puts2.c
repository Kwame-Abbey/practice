#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
