#include <stdio.h>
/**
 *print_name - print name function
 *@name: name of person
 *@f: function to print char
 *
 *Description: print the name bruv
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
