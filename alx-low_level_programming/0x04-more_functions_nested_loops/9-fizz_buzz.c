#include "main.h"

/**
 * main - Fizzbuzz project
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
