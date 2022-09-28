#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	int res;

	if (*s1 == '\0' && *s2 == '\0')
		res = 1;
	else if (*s1 != *s2 && *s2 != '*')
		res = 0;
	else if (*s1 == '\0' && *s2 == '*')
		res = wildcmp(s1, ++s2);
	else if (*(s1 + 1) == '\0' && *(s2 + 1) != '\0')
		res = wildcmp(s1, ++s2);
	else if (*s1 == *s2 && *(s2 + 1) == '*')
		res = wildcmp(s1, ++s2);
	else if (*(s1 + 1) != *(s2 + 1) && *(s2 + 1) == '*')
		res = wildcmp(++s1, ++s2);
	else if (*(s1 + 1) != *(s2 + 1) && *s2 == '*')
		res = wildcmp(++s1, s2);
	else
		res = wildcmp(++s1, ++s2);

	return (res);
}
