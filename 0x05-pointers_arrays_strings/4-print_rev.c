#include "main.h"

/**
 * print_rev - This function prints a string, in reverse, followed
 * by a new line.
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = _strlen(s) - 1;

while (len >= 0)
_putchar(s[len--]);

_putchar('\n');
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
