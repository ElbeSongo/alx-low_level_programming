#include <unistd.h>

/**
 * main - Entry point, prints the lowercase alphabet in reverse followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
	return (0);
}
