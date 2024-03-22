#include "main.h"

int helper_func(int n, int i);

/**
 * is_prime_number - returns 1 if the iout number is prime
 * @n: number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper_func(n, n - 1));
}

/**
 * helper_func - helper function
 * @n: number
 * @i: iterator
 *
 * Return: 1 or 0
 */

int helper_func(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper_func(n, i - 1));
}
