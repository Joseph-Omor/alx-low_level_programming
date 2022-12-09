#include <stdio.h>

/**
 * _strcpy - copy string to buffer dest
 * @dest: buffer to copy into
 * @src: string to copy
 *
 * Return: pointer to copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
