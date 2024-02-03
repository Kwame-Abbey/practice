#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: integer
 *
 * Return: absolute value of an integer
 */

int _abs(int a)
{
	return ((a > 0) ? a : a + (2 * (-a)));
}
