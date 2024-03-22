#include "main.h"

int helper_func(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n:
 *
 * Return: Natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper_func(n, 0));
}

/**
 * helper_func - helper function for recursive function
 * @n: number
 * @i: iterator
 *
 * Return: natural prime or -1
 */

int helper_func(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper_func(n, i + 1));

}
