#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int val1 = 1, val2 = 2, fib, sum = 2;

	while (1)
	{
		fib = val1 + val2;

		if (fib > 4000000)
			break;

		if (fib % 2 == 0)
			sum += fib;

		val1 = val2;
		val2 = fib;
	}
	
	printf("%ld\n", sum);

	return (0);
}
