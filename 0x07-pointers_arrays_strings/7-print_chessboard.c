#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -  prints the chessboard.
 * @a: The chess board array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j, sizeA, sizeB;

	sizeA = (int)sizeof(a);
	sizeB = 8;

	for (i = 0; i < sizeA; i++)
	{
		for (j = 0; j < sizeB; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
