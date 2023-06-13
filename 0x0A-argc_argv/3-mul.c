#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc: argument count
 * @argv: agrument vector (array of argument strings)
 *
 * Return: 0 if successful, 1 if not successful.
 */

int main(int argc, char *argv[])
{
	int result;
	int i;
	int num;
	char *lastptr;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	result = 1;

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &lastptr, 10);

		if (*lastptr != '\0')
		{
			return (1);
		}

		result *= num;
	}

	printf("%d\n", result);

	return (0);


	printf("%d\n", result);

	return (0);
}
