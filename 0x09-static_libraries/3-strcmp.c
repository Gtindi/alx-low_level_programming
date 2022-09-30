#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int res, i, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	res = 0;
	i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = (int)s1[i] - (int)s2[i];
			break;
		}
		i++;
	}

	if (res == 0 && len1 != len2)
	{
		res = s2[i] * -1;
	}
	return (res);
}
