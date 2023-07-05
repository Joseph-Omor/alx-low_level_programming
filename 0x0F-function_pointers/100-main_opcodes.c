#include <stdio.h>
#include <stdlib.h>


void print_opcodes(int numBytes);
/**
 * main - main function
 * @argc: Argument count
 * @argv: Array of arguments as strings
 *
 * Return: 0 on success, 2 on error
 */
int main(int argc, char *argv[])
{
	int numBytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numBytes = atoi(argv[1]);

	/* Check if the number of bytes is negative */
	if (numBytes < 0)
	{
		printf("Error\n");
		return (1);
	}

	/* Call the function to print the opcodes */
	print_opcodes(numBytes);

	return (0);
}

/**
 * print_opcodes - A function that takes an integer and prints the opcodes of
 * its own main function
 * @numBytes: number of bytes
 */
void print_opcodes(int numBytes)
{
	int i;
	unsigned char *ptr;

	ptr = (unsigned char *)print_opcodes;

	for (i = 0; i < numBytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}

