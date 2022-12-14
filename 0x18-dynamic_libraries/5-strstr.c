#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: The string to be searched in
 * @needle: The string to be searched for
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len;
	char *found = NULL;

	i = 0;
	while (needle[i] != '\0')
		i++;
	len = i;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i] == needle[j]; j++)
		{
			if (haystack[i] != needle[j])
				break;
			++i;
		}

		if (j == len)
		{
			found = (haystack + i - len);
			break;
		}
	}

	return (found);
}
