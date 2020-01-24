#include <stdio.h>

/**
 * main - Prints all numbers of base 16.
 *
 * Return: 0 if no error
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		     putchar(n);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
