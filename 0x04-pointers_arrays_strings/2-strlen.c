#include "holberton.h"
/**
 *_strlen - return the length of a string
 *@s: string
 *
 *Return: String length.
 */
int _strlen(char *s)
{
	int count = 0;
	int start;

	for (start = 0; s[start] != 0; start++)
	{
		count++;
	}
	return (count);
}
