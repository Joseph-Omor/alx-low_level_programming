#include "main.h"

/**
 * _strncat - concatenates two strings with n number of bytes for src
 * @dest: String one
 * @src: String two
 * @n: length of string to copy
 *
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	dest[i] = '\0';
	for (j = 0; j < n; j++)
	{
		if (src[j] == 0)
			break;
		dest[i++] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
