#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: The block size in byte
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
