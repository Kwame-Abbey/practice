#include <stdio.h>

/**
 * main - prints in lowercase all alphabets excluding q and e
 * Return: Always 0.
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if ((a != 'e') && (a != 'q'))
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
