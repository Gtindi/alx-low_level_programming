#include "main.h"
#include <stdio.h>

/**
 * rev_string - This function reverses a string.
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char tmp1, tmp2;
	int i, j;

	i = _strlen(s) - 1;
	j = 0;

	while (i != j && j < i)
	{
		tmp1 = s[i];
		tmp2 = s[j];
		s[i] = tmp2;
		s[j] = tmp1;
		j++;
		i--;
	}
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
