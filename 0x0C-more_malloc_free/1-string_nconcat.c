#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: The number of s2 to concatenate to s1
 *
 * Return: a pointer to s1 and s2 string, NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	unsigned int size, len, i, j;

	s1 = s1 == NULL ? "" : s1;
	s2 = s2 == NULL ? "" : s2;
	len = _strlen(s2);
	n = (n > len) ? len : n;

	len = _strlen(s1);
	size = len + n + 1;
	str = malloc(sizeof(char) * size);

	if (str != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];

		for (j = 0; j < n && s2[j] != '\0'; i++, j++)
			str[i] = s2[j];

		str[i] = '\0';
	}

	return (str);
}

/**
 * _strlen - This function returns the length of a string.
 * @s: The string to return the length
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	long int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
