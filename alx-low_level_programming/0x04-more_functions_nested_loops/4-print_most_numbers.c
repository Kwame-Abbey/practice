#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 without 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		if (ch != '2' && ch != '4')
			_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
