#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: string called name
 * @f: pointer to function that receives a string argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	{
		(*f)(name);
	}
}
