#include "function_pointers.h"

/**
 * print_name - function that calls function pointer
 * @name: string parsed to function
 * @f: pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{

	//void (*fptr)(char *);
	if (f != NULL && name != NULL)
		f(name);
	
}
