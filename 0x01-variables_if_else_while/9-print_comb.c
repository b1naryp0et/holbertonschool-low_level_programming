#include <stdio.h>

/**
 * main - Prints all single digit numbers, seperated by commas.
 *
 * Return: 0 if no error
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		     putchar(n);
		     if (n < '9')
		     {
			     putchar(',');
			     putchar(' ');
		     }
	}
	putchar('\n');
	return (0);
}
