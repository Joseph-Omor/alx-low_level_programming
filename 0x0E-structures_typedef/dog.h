#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct dog defined
 * @name: struct member
 * @age: struct member
 * @owner: struct member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
