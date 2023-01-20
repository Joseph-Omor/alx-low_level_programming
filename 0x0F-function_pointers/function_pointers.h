#ifndef _function_pointers_H_
#define _function_pointers_H_

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

#endif /* _function_pointers_H_ */
