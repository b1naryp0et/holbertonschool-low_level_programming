#include <stdio.h>

/**
 * main - Prints the alphabet in reverse
 *
 * Return: 0 if no error
 */

int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
		     putchar(n);
	putchar('\n');
	return (0);
}
