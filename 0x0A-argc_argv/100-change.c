#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: arguments saved in an array
 *
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int coin_count, i, cents, num_coins;
	int coin_values[5] = {25, 10, 5, 2, 1};

	num_coins = sizeof(coin_values) / sizeof(coin_values[0]);
	coin_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate the minimum number of coins */
	for (i = 0; i < num_coins; i++)
	{
		coin_count += cents / coin_values[i];
		cents %= coin_values[i];
	}

	printf("%d\n", coin_count);
	return (0);
}
