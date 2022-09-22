/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: The string to be transformed
 *
 * Return: The transformed string
 */
char *string_toupper(char *str)
{
	int i, c, alpha, maxAlpha;

	alpha = 97;
	maxAlpha = alpha + 26;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if ((c >= alpha) && (c < maxAlpha))
		{
			str[i] = c - alpha + 65;
		}
	}

	return (str);
}
