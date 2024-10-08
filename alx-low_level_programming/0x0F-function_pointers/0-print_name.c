#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL || size <= 0) return;

	f(name);
}
