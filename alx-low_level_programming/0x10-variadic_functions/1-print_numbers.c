#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: integer
 * @...: ellipsis
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0) return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i < (n - 1))
		{
			printf("%d", va_arg(ap, int));
			printf("%s ", separator);
		} else
		{
			printf("%d\n", va_arg(ap, int));
		}

	}
	va_end(ap);
}
