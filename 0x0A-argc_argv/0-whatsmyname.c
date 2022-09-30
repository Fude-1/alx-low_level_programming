#include <stdio.h>

/**
 * main - Prints its name followed by a new line.
 *
 * @argc: argc parameter.
 * @argv: Array i of command listed.
 *
 * Return: ON success 0;
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
