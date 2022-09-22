#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 *
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	char c;
	int i, start;
	int capitalize = 0;

	start = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (start == 1)
		{
			start = 0;
			capitalize = 1;
		}
		if (is_delimiter(c) == 1)
		{
			capitalize = 1;
			continue;
		}

		if (capitalize == 1)
		{
			if (_islower(c) == 1)
				str[i] = (int)c - 97 + 65;
			capitalize = 0;
		}
	}

	return (str);
}

/**
 * is_delimiter - Checks if a character is a delimiter
 * @c: The character to be tested
 *
 * Return: 1 if the character is a delimiter, 0 otherwise
 */
int is_delimiter(char c)
{
	int res, i;
	char delimiters[] = " \t\n,;.!?\"(){}";

	res = 0;
	i = 0;
	for (i = 0; delimiters[i] != '\0'; i++)
	{
		if (delimiters[i] == c)
		{
			res = 1;
			break;
		}
	}
	return (res);
}

/**
 * _islower - Checks for uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _islower(int c)
{
	int res, lower, max;

	lower = 97;
	max = lower + 25;

	if (c >= lower && c <= max)
		res = 1;
	else
		res = 0;

	return (res);
}
