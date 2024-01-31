#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int a = 1, b = 2, next;

	printf("%1d, %1d", a, b);

	for (int i = 2; i < 50; i++)
	{
		next = a + b;
		printf(", %1d", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
