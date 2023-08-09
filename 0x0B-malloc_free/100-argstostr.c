#include "main.h"

/**
 * argstostr - A function that concatenates all it its argument
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Pointer to newly concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int i, total_length, current_position;
	char *concatenated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	concatenated = malloc(sizeof(char) * total_length + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}

	current_position = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(concatenated + current_position, av[i]);
		current_position += strlen(av[i]);
		concatenated[current_position] = '\n';
		current_position++;
	}

	concatenated[current_position] = '\0';

	return (concatenated);
}
