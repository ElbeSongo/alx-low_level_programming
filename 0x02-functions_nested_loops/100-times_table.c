#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table starting with 0.
 * @n: The number to determine the size of the times table.
 */
void print_times_table(int n)
{
	int x = 0;
	int y = 0;
	int multiple;

	while ((y <= n) && (n >= 0 && n < 15))
	{
		x = 0;
		while (x <= n)
		{
			multiple = y * x;

			if (x > 0 && y >= 0 && multiple < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (multiple >= 10 && multiple < 100)
			{
				_putchar(' ');
				_putchar(multiple / 10 + 48);
			}

			else if (multiple >= 100)
			{
				_putchar(multiple / 100 + 48);
				_putchar(multiple / 10 % 10 + 48);
			}
			_putchar(multiple % 10 + 48);
			if (x != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			x++;
		}
		_putchar('\n');
		y++;
	}
}
