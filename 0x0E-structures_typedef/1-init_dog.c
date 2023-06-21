#include "dog.h"

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
	struct dog **d_ptr;

	d_ptr = &d;

	(*d_ptr)->name = name;
	(*d_ptr)->age = age;
	(*d_ptr)->owner = owner;
}

