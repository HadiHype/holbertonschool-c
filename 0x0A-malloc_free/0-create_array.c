/**
 *create_array- creating an array of initialized chars
 *@size: size of array
 *@c: initialized char
 *
 *Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	if (size == 0)
		return (NULL);
	x = malloc(size * sizeof(char));
	if (x == NULL)
		return (NULL);
	for (y = 0; i < size; i++)
		x[i] = c;
	return (x);
}
