#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase, followed by a new line.
 */
void print-alphabet_x10(void)
{
	int i = 0;
	int alpha;

	while (i < 10)
	{
		alpha = 97;

		while (alpha <= 122)
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
		i++;
	}
}


