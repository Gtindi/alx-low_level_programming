/**
 * _strncat - concatenates two strings.
 * @src: The first part o the string
 * @dest: The second part of the string
 * @n: Total num ber of bytes to take from src
 *
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;
	int terminate = 1;

	i = 0;
	while (src[i] != '\0')
		i++;
	len = i;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	if (n > len)
	{
		n = len;
		terminate = 0;
	}

	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (terminate)
		dest[i] = '\0';
	return (dest);
}
