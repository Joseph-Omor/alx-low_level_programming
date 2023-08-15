#include "dog.h"

/**
 * init_dog - a fucntion that initializes a struct dog
 * @d: pointer to struct
 * @name: name member
 * @age: age member
 * @owner: owner member
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dptr;

	dptr = d;

	(*dptr).name = name;
	(*dptr).age = age;
	(*dptr).owner = owner;
}
