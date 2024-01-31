#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long a = 1, b = 2, fib;

	printf("%lu %lu", a, b);

	for (int i = 2; i < 98; i++)
	{
		fib = a + b;
		printf(" %lu", fib);

		a = b;
		b = fib;
	}

	printf("\n");

	return (0);
}
