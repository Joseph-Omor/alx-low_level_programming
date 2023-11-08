/** 
 * A C program to demonstrate use of bitwise operators
 */
#include <stdio.h>

int main(void)
{
	/* a = 5(00000101), b = 9(00001001) */
	unsigned char a = 5, b = 9;

	/* The result is 00000001 */
	printf("a = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a & b);
	
	printf("a|b = %d\n", a | b);
	
	printf("a^b = %d\n", a ^ b);
	
	printf("~a = %d\n", a = ~a);

	printf("b<<2 = %d\n", b << 2);
	
	printf("b>>1 = %d\n", b >> 1);

	return (0);
}
