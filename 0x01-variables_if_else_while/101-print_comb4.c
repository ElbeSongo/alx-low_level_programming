#include <stdio.h>

/**
 * main - Entry point, prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit;
	int second_digit;
	int third_digit;

	for (first_digit = 0; first_digit < 8; ++first_digit)
	{
		for (second_digit = first_digit + 1; second_digit < 9; ++second_digit)
		{
			for (third_digit = second_digit + 1; third_digit <= 9; ++third_digit)
			{
				putchar('0' + first_digit);
				putchar('0' + second_digit);
				putchar('0' + third_digit);

				if (first_digit != 7 || second_digit != 8 || third_digit != 9)
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');

	return (0);
}
