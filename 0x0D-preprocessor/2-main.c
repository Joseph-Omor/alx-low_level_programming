#include <stdio.h>

/**
 * main - A program that prints the name of the file it's compiled from
 *
 * Return: 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
