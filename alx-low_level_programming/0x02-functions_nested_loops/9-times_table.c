#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (p > 9)
			{
				if (j != 9)
				{
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
					_putchar(',');
					_putchar(' ');
				} else
				{
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
			} else
			{
				if (j != 9)
				{
					_putchar(p + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				} else
				{
					_putchar(p + '0');
				}
			}
		}
		_putchar('\n');
	}
}
