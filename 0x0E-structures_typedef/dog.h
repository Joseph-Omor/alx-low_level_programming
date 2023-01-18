#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>


/**
 * struct dog - structure dog
 * @name: struct dog element #1
 * @age: struct dog element #2
 * @owner: struct dog element #3
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */

