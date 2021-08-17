#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum the values
 *@n: total arguments
 *
 *Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int x, sum = 0;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (x = 0; x < n; x++)
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}
