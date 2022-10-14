#include <stdio.h>
/* main - Prints the size of variable types on machine */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
