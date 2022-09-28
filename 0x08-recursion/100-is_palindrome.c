#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to be checked
 *
 * Return: int
 */
int is_palindrome(char *s)
{

	return (_compare(s, 0, _strlen(s) - 1));
}

/**
 * _compare - check if a string is palidrome
 * @s: The string to be checked
 * @start: start position
 * @end: end position
 *
 * Return: int
 */
int _compare(char *s, int start, int end)
{
	if (start > end)
		return (0);
	else if (s[start] != s[end])
	{
		return (0);
	}
	else if (start == end && s[start] == s[end])
	{
		return (1);
	}
	else if (start == end - 1 && s[start] == s[end - 1])
	{
		return (1);
	}
	else
		return (_compare(s, ++start, --end));
}

/**
 * _strlen - returns the length of a string.
 * @s: The string to compute the length
 *
 * Return: int
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(++s));
}
