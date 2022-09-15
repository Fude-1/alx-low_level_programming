#include <stdio.h>

/**
 * main - Prints numbers 1 to 100 followed by a new line
 * Multiples of 3 Fizz is printed and mulriples of 5 Buzz instead of the number
 * Numbers noth multiples of 3 and 5 FizzBuzz is printed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0  && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
		{
			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
