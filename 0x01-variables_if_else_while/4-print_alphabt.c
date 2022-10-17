#include <stdio.h>
/**
 * main - main block
 * description: print alphabet in lowercase except 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
