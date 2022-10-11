#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: A point to dog
 * @name: The dog name
 * @age: the dog age
 * @owner: The dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
