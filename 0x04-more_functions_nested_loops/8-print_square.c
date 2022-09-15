#include "main.h"

/**
 * print_square - Prints a square
 * @size: The size of the square
 *
 * Return: void
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
