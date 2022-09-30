#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The string
 * @accept: The set of bytes
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *found = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = &s[i];
				break;
			}
		}

		if (found != NULL)
			break;
	}

	return (found);
}
