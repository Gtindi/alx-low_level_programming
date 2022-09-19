#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The string to be halfed and print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, half;

	i = 0;
	while (str[i] != '\0')
		i++;

	len = i + 1;

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;

	i = half;
	while (i < len - 1)
		_putchar(str[i++]);

	_putchar('\n');
}
