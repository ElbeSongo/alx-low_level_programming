#include <stdio.h>

/**
 * main - this is the main function
 * Return: 1 (Error)
 */

int main(void)
{
	char string[] = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
	int a = 0;

	while (string[a] != '\0')
	{
		putchar(string[a]);
		a++;
	}

	return (1);
}
