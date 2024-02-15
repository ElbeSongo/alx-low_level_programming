#ifndef MAIN_H
#define MAIN_H

/**
 * largest number - Returns the largest of three integers.
 * @a: First integer.
 * @b: Second integer.
 * @c: Third integer.
 *
 * Return: The largest of the three integers
 */
int largest_number(int a, int b, int c);

/**
 * print_remaining_days - Prints the remaining days of the year.
 * @month: Month(1-12).
 * @day: Day of the month(1-31).
 * @year: Year.
 */
void print_remaining_days(int month, int day, int year);

/**
 * convert_day - Converts a day to the day of the year.
 * @month: Month(1-12).
 * @day: Day of the month(1-31).
 *
 * Return: The day of the year.
 */
int convert_day(int month, int day);

#endif /* MAIN_H */
