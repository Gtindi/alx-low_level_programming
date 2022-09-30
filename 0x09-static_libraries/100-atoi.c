#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int negative = 0;
	int start = 0;
	int foundDigit = 0;
	int i;
	int n = 0;
	int steps = 0;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if (c == '-' && start != 1)
		{
			if (negative == 1)
				negative = 0;
			else
				negative = 1;
		}

		if (_isdigit(c) != 1 && foundDigit == 1)
			break;
		if (foundDigit != 1 && _isdigit(c) == 1)
		{
			foundDigit = 1;
			start = 1;
			steps = 1;
		}
		if (foundDigit)
		{
			n = (n * steps) + (int)(c - 48);
			steps = 10;
		}
	}
	if (negative == 1)
		return (n * -1);
	else
		return (n);
}

/**
 * _isdigit - Checks for a digit
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int res, zero, max;

	zero = 48;
	max = zero + 9;

	if (c >= zero && c <= max)
		res = 1;
	else
		res = 0;

	return (res);
}
