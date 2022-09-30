#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 *
 * @argc: argc parameter.
 * @argv: An array of command listed.
 *
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);
	return (0);
}
