#include "lists.h"

/**
 * sum_dlistint - Sums the values in a doubly linked list
 * @head: head node of list
 *Return: The sum of values in nodes. Empty list value = 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sigma = 0;

	while (head)
	{
		sigma += head->n;
		head = head->next;
	}
	return (sigma);
}
