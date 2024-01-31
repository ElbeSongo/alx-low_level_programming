#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98.
 * @n: The starting number.
 */
void ptint_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (int i + n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}

	printf("\n");
}
