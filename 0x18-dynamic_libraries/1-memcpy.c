/**
 * _memcpy - copies memory area.
 * @dest: The destination to be copied to
 * @src: The source to be copied from
 * @n: the number of bytes to be copied
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
