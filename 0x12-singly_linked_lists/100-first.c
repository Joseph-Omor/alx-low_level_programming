#include "lists.h"

/**
 * print_before_main - a function that prints before main
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


/**
 * calledBeforeMain - A function to call(execute) print_before_main
 */
__attribute__((constructor))
void calledBeforeMain(void)
{
/**
 * The __attribute__((constructor)) - statement is a GNU extension
 * that allows to specify a function to automatically execute
 * before the main() fuction
 */
	print_before_main();
}
