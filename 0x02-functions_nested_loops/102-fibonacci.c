#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int val1 = 1;
	long int val2 = 2;
	long int fib;
	int x = 3;

	printf("%ld, %ld, ", val1, val2);

	while (x <= 50)
	{
		fib = val1 + val2;

		printf("%ld", fib);

		if (x != 50)
		{
			printf(", ");
		}
		val1 = val2;
		val2 = fib;
		x++;
	}
	putchar('\n');
	return (0);
}
