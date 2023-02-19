#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char alpha;

	num = 48;
	while (num < 58)
	{
		putchar(num);
		num++;
	}

	alpha = 'a';
	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
