#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0.
 */

int main(void)
{
	int i, j, k;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				if ((i < j) && (j < k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i != '7') || (j != '8') || (k != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
