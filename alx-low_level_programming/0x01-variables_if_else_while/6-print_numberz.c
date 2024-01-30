#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: Always 0.
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
