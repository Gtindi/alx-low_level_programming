#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase to stdout
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int start;
	int max;

	while (i < 10)
	{
		start = 97;
		max = start + 26;
		while (start < max)
		{
			_putchar(start++);
		}
		_putchar('\n');
		i++;
	}
}
