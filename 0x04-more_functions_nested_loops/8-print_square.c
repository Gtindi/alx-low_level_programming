#include <stdio.h>
#include "main.h"

/**
 * print_square- prints squares
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int row, column;

	row = 0;

	if (size > 0)
	{
		while (row < size)
		{
			column = 0;
			while (column < size)
			{
				_putchar('#');
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
