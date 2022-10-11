#include "dog.h"

/**
 * free_dog - Free a dog data from memory
 * @d: The dog to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
