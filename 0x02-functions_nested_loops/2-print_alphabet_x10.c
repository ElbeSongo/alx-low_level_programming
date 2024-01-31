#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	int alpha = 97;
	int num = 48;

	while (num <= 57)
	{
		alpha = 97;
		while (alpha <= 122)
		{
			_putchar(alpha);
			alpha++;
		}
		num++;
		_putchar('\n');
	}
}




