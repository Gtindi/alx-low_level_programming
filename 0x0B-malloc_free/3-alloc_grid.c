#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: Array width
 * @height: Array height
 *
 * Return: double pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr2d = NULL;
	int i, j;

	if (width > 0 && height > 0)
	{
		arr2d = (int **)malloc(sizeof(int *) * height);
		if (arr2d != NULL)
		{
			for (i = 0; i < height; i++)
			{
				arr2d[i] = (int *)malloc(sizeof(int) * width);
				if (arr2d[i] == NULL)
				{
					while (i >= 0)
						free(arr2d[i--]);
					free(arr2d);
					arr2d = NULL;
					break;
				}

				for (j = 0; j < width; j++)
					arr2d[i][j] = 0;
			}
		}
	}
	return (arr2d);
}
