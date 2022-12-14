/**
 *  _strspn - gets the length of a prefix substring.
 * @s: The string that contains the substring
 * @accept: the Substring in s
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int prev, count;
	int i, j;

	prev = 0;
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		prev = count;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				++count;
			}
		}
		if (prev == count)
			break;
	}

	return (count);
}
