#include "function_pointers.h"

/**
 * print_name - a fucntin that prints a name using function pointers
 * @f: function pointer argument
 * @name: name argument
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
