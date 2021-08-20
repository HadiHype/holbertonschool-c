/**
 *create_array - creating an array of chars and initialize it
 *@size: size of array
 *@c: initialized char
 *
 *
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
