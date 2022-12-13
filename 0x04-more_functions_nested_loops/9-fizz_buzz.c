#include <stdio.h>
/**
 * main - The Fizz Buzz test
 *
 */


#define T 3
#define F 5
#define FF 15


int main(void)
{
	int i;
	int n = 100;


	for (i = 1; i <= n; ++i)
	{
		if (i % FF == 0 && i % F == 0 && i % T == 0)
			printf("FizzBuzz ");
		else if (i % T == 0)
			printf("Fizz ");
		else if (i % F == 0)
		{
			if (i == n)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
