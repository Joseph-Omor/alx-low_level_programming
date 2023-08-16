#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a fucntin that prints a name using function pointers
 * @f: function pointer argument
 * @name: name argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
