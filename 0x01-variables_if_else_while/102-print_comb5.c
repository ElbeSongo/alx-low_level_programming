#include <stdio.h>

/**
 * main - Entry point, prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens1, units1, tens2, units2;

	for (tens1 = 0; tens1 < 10; ++tens1)
	{
		for (units1 = 0; units1 < 10; ++units1)
		{
			for (tens2 = tens1; tens2 < 10; ++tens2)
			{
				int start units = (tens1 == tens2) ? units1 + 1 : 0;

				for (units2 = start_units2; units2 < 10; ++units2)
				{
					putchar('0' + tens1);
					putchar('0' + units1);
					putchar(' ');
					putchar('0' + tens2);
					putchar('0' + units2);

					if (!(tens1 == 9 && units1 == 8 && tens2 == 9 && units2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
