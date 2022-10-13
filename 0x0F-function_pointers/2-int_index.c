#include <stdio.h>

/**
 * int_index - searces for an integer
 * @array: The array
 * @size: The array size
 * @cmp: Comparator callback
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	index = -1;
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				index = i;
				break;
			}
		}
	}
	return (index);
}
