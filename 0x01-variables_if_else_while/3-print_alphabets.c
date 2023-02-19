#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha1;
	int alphah;

	alpha1 = 'a';
	while (alpha1 <= 'z')
	{
		putchar(alpha1);
		alpha1++;
	}

	alphah = 'A';
	while (alphah <= 'Z')
	{
		putchar(alphah);
		alphah++;
	}
	putchar('\n');
	return (0);
}
