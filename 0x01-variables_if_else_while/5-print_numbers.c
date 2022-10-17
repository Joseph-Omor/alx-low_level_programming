#include <stdio.h>

/**
 * main - main block
 * description: print out all number of base 10, starting from 0.
 * Return 0 - program successfully executed
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
