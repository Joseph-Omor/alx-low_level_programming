#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program adds two positive numbers
 * @argc: argument count
 * @argv: agrument vector (array of argument strings)
 *
 * Return: 0 if successful, 1 if not successful.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0, value = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		/* check if argument contains non-digit characters */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				/* If non-digit characters found */
				printf("Error\n");
				return (1);
			}
		}

		value = atoi(argv[i]);

		sum += value;
	}
	printf("%d\n", sum);

	return (0);

}
