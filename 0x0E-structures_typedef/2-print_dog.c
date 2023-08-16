#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: struct dog argument
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: ");
	if (d->name != NULL)
	{
		printf("%s\n", d->name);
	}
	else
	{
		printf("(nil)\n");
	}

	printf("Age: %.6f\n", d->age);

	printf("Owner: ");
	if (d->owner != NULL)
	{
		printf("%s\n", d->owner);
	}
	else
	{
		printf("(nil)\n");
	}
}
