#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
