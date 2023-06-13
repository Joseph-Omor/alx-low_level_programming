#include <stdio.h>

/**
 * main - program that prints a count of its arguments
 * @argc: argument count
 * @argv: agrument vector (array of argument strings) *UNUSED
 *
 * Return: 0 if successful.
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argc);
	}
	return (0);
}
