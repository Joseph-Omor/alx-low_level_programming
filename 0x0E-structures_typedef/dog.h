#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct dog
 * @name: struct member name
 * @age: struct member age
 * @owner: struct member owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
