#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *str = NULL;
	unsigned int size, i, j;

	size = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = _strlen(s1);
	size += _strlen(s2);
	str = malloc(sizeof(char) * size + 1);
	if (str != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		j = i;
		for (i = 0; s2[i] != '\0'; i++, j++)
			str[j] = s2[i];

		str[size] = '\0';
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
