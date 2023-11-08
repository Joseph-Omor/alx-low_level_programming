#include <stdio.h>

int main(void)
{
	int number = 21;
	printf(" %-10d \n", number);
	printf(" %010d \n", number);
	printf(" %-#10X \n", number);
	printf(" %#x \n", number);
	return (0);
}
