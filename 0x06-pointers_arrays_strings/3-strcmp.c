
/**
 * _strcmp - compares to strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 15 if greater, -15 if less than or zero if equals
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int value;

	value = 0;
	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (*s1 > *s2)
		{
			value = 15;
		}
		else if (*s1 < *s2)
		{
			value = -15;
		}
		else
			break;
		i++;
	}
	return (value);
}
