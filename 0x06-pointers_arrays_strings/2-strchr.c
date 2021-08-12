/**
 *_strchr - returns a pointer to the first occurence of char c
 *@s: char returned to
 *@c: first occurence
 *
 *Return: char pointer
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] < '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}

	return ('\0');
}

