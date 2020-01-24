#include <stdio.h>

/**
 * main - Prints the alphabet, except q and e, in lowercase.
 *
 * Return: 0 if no error
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
		     putchar(n);
		}
	}

	putchar('\n');
	return (0);
}
