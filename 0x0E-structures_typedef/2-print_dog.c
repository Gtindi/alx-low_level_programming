#include "dog.h"

/**
 * print_dog - Print dog data to stdio
 * @d: a dog data
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d != NULL)
	{
		name = d->name != NULL ? d->name : "(nil)";
		owner = d->owner != NULL ? d->owner : "(nil)";
		printf("Name: %s\n", name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", owner);
	}
}
