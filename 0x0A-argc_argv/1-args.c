#include <stdio.h>

/**
 * main - Prints number of arguments passed into it.
 *
 * @argc: argc parameter.
 * @argv: Array of command listed.
 *
 * Return: On success 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
