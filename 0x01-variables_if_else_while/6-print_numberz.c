#include <stdio.h>
/* Project 5 */

/**
 *main-print digit of base 10
 *Return: 0 (Success)
 */
int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
		putchar(nb + '0');
	printf("\n");
	return (0);
}
