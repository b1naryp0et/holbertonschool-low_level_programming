#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: number to factorialize
 * Return: factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
