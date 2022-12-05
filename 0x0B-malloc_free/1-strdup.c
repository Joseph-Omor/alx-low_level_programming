#include <stdlib.h>

/**
 * _strdup - function to return pointer to duplicate string
 * @str: string received as parameter
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *p;
	int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	p = malloc(a * sizeof(*p) + 1);

	if (p == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
	{
		p[b] = str[b];
	}
	p[b] = '\0';

	return (p);
}
