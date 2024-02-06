#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
	}
}
