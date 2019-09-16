#include "lists.h"

/**
 * free_dlistint - Frees doubly linked list
 * @head: start of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder_var;

	while (head)
	{
		free(holder_var);
		holder_var = head;
		head = head->next
	}
}
