#include "main.h"

/**
 * _calloc - allocates memory for an array
 * using malloc.
 * @nmemb: The number of member elements
 * @size: The array size in bytes
 *
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int i;

	if (nmemb > 0 && size > 0)
	{
		ptr = malloc(size * nmemb);

		if (ptr != NULL)
		{
			for (i = 0; i < nmemb * size; i++)
				*((char *)ptr + i) = 0;
		}
	}

	return (ptr);
}
