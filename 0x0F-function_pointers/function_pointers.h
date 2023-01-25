#ifndef _function_pointers_H_
#define _function_pointers_H_
#include <stddef.h>


int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));


int int_index(int *array, int size, int (*cmp)(int));
void print_elem_hex(int elem);
void print_elem(int elem);



#endif /* _function_pointers_H_ */
