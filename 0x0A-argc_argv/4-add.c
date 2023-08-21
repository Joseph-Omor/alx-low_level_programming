#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: number of arguments passed
 * @argv: array containing arguments as strings
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0, j = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				/* Non-digit character found, print Error and return */
				printf("Error\n");
				return (1);
			}
			j++;
		}

		/* Convert the argument to integer and add to the sum */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
