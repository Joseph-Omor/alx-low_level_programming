#include "main.h"
/* main - this program prints alphabets a to z using ASCII representations and _putcar(a function that prints single characters)
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)/* 97 or 'a' are the ASCII representation of lowercase a
				     *
				     * 122 or 'z' are the ASCII representation of lowercase z
				     * 
				     */ 
	{
		_putchar(i);
	}
	_putchar('\n');
}
