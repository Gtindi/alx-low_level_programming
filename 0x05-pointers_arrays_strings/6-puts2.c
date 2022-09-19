#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the
 * first character
 * @str: The string with the characters to be printed
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
		i++;

	len = i - 1;
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (i + 2 > len)
			break;
		i += 2;
	}
	_putchar('\n');
}
