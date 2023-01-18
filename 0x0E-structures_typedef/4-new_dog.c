#include "dog.h"

/**
 * new_dog - function to create new struct dog
 * @name: struct dog element
 * @age: struct dog element
 * @owner: struct dog element
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *p = &new_dog;

	p->name = name;
	p->age = age;
	p->owner = owner;

	if (p == NULL)
		return (NULL);
	else
		return (p);
}
