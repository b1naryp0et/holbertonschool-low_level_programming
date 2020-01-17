#include "search_algos.h"

/**
 * linear_search - Searches for value in an array with linear search
 * @array: array which is searched
 * @size: number of elements in array
 * @value: value being searched for
 *
 * Return: The index of the value or -1 if not located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
