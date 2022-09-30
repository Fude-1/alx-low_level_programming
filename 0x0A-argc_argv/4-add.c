#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 *
 * @argc: argc parameter
 * @argv: An array of a command listed.
 *
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	int res = 0, num, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		res += num;
	}
	printf("%d\n", res);
	return (0);
}
