#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string in reverse
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int i = 0, j = 0, k;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (j < i)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;
		j++;
		i--;
	}
}
