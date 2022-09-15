#include <stdio.h>
#include "main.h"

/**
 * print_numbers- prints all no. from 0-9
 * Return: returns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
