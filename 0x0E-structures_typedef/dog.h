#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct dog
 * @name: struct member name
 * @age: struct member age
 * @owner: struct member owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
