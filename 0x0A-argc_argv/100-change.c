#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum amount of coins to make change for an amount of money
 *
 * @argc: argc parameter.
 * @argv: An araay of a command loisted.
 *
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	int num, j, res = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			num -= coins[j];
			res++;
		}
	}
	printf("%d\n", res);
	return (0);
}
