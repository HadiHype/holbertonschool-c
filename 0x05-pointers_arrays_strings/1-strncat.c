/**
 * _strncat - concatenates
 * @dest: destination
 * @src: source
 * @n: n bytes of src
 *
 * Return: Pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int count = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
		count++;
		if (count == n)
			break;
	}
	*dest = '\0';
	return (start);
}
