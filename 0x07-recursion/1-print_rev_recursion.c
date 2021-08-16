#include "holberton.h"

/**
 * _puts_recursion - prints recursively
 *@s: string pointer
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}