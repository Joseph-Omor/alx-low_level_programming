#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	p = malloc((a * sizeof(*s1) + (b * sizeof(*s2) + 1)));

	if (p == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (a + b + 1); c++)
	{
		if (c < a)
			p[c] = s1[c];
		else
			p[c] = s2[d++];
	}
	p[c] = '\0';

	return (p);
}

