#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: A point to an array of integers
 * @n: The total number of elements in a to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i + 1 < n)
			printf(", ");
	}
	printf("\n");
}
