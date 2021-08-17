#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print all numbers
 *@seperator: seperates the numbers
 *@n: arguments
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int x;

	va_start(arguments, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(arguments, int));

		if (x != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(arguments);
}
