#include "holberton.h"

/**
 *strcpy - copy dest to src
 *@dest: destination
 *@src: source
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
