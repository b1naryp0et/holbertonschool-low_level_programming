#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 *
 * Return: 0 if no error
 */

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		     putchar(n);
	for (n = 'A'; n <= 'Z'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
