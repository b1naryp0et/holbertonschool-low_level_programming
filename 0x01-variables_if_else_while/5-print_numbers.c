#include <stdio.h>

/**
 * main - Prints all single digit numbers.
 *
 * Return: 0 if no error
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		     putchar(n);
	putchar('\n');
	return (0);
}
