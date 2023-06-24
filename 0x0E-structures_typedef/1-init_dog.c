#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: struct member name
 * @age: struct member age
 * @owner: struct member owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
	{
		exit(1);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

