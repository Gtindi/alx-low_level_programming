/**
 * _memset - fills memory with a constant byte.
 * @s: A char pointer
 * @b: The byte to be used to fill s
 * @n: The size of memory area of s to be filled
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
