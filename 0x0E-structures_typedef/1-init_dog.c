#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a fucntion that initializes a struct dog
 * @d: pointer to the struct
 * @name: name member
 * @age: age member
 * @owner: owner member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
