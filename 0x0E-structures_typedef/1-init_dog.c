#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialize struct dog variable
 * @d: local variable
 * @name: received argument
 * @age: received argument
 * @owner: received argument
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog doggie;

	doggie.name = name;
	doggie.age = age;
	doggie.owner = owner;

	*d = doggie;
}
