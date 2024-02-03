#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: number
 *
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	int n = a % 10;

	if (n >= 0)
	{
		_putchar(n + '0');
		return (n);
	} else if (n < 0)
	{
		_putchar((-n) + '0');
		return (-n);
	}
	return (0);
}
