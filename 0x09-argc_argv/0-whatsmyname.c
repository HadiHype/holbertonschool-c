#include <stdio.h>

/**
* main -  print program name
* @argc: arg counter
* @argv: array of command line
* Return: 0
**/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
