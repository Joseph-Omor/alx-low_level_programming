#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(1);
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
		printf("Name: %s\n", d->name);

	if (d->age == -1.0)
	{
		printf("Age: (nil)");
	}
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
		printf("Owner: %s\n", d->owner);
}
