#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of the 3 integers.
 * @a: First integer.
 * @b: Second integer.
 * @c: Third integer.
 * Return: Largest number.
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (0);
}
