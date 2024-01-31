#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int sum = 0;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum += x;
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
