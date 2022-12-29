/**
 * _strncpy - function copies string
 * @dest: destination buffer
 * @src: string to copy
 * @n: length to copy
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	dest[i] = '\0';
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
