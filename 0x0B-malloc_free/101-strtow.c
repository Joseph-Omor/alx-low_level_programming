#include "main.h"

/**
 * strtow - A function that splits a string into words
 * @str: string argument
 *
 * Return: A pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	int i, word_count;
	char *copy;
	char *token;
	char **words;
	
	word_count = 0;
	i = 0;
	copy = strdup(str);
	token = strtok(copy, " ");
	
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	while (token != NULL)
	{
		word_count++;
		token = strtok(NULL, " ");
	}

	free(copy);

	words = malloc(sizeof(char *) * word_count + 1);
	if (words == NULL)
	{
		return (NULL);
	}

	copy = strdup(str);
	token = strtok(copy, " ");
	while (token != NULL)
	{
		words[i] = strdup(token);
		i++;
		token = strtok(NULL, " ");
	}
	words[i] = NULL;

	free(copy);

	return (words);
}
