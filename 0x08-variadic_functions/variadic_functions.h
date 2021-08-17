#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>

/**
 * struct printer - struct to print
 * @symbol: Datatype
 * @print: Function that prints all
 *
 */
typedef struct print
{
	char *symbol;
	void (*print)(va_list arg);

} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
