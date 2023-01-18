#include "dog.h"

/**
 * init_dog - function to initialize truct dog
 * @d: pointer to struct dog
 * @name: struct dog element
 * @age: struct dog element
 * @owner: struct dog element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	(*d).owner = owner; }
