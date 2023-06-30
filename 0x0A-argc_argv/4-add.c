#include <stdio.h>
#include <stdlib.h>

/**
 * main - program adds two positive numbers
 * @argc: argument count
 * @argv: agrument vector (array of argument strings)
 *
 * Return: 0 if successful, 1 if not successful.
 */

int main(int argc, char *argv[])
{
	int i, result = 0, value = 0;

	if (argc <= 1)
	{
		printf("0\n");
		exit(1);
	}

	for (i = 1; i < argc; i++)
	{
		value = atoi(argv[i]);

		/**
		 * atoi returns 0 on error, also check that returned 0 isn't numeric
		 * representation of '0'
		 */
		if (value == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			exit(1);
		}
		else
		{
			result += value;
		}
	}
	printf("%d\n", result);

	return (0);

}
