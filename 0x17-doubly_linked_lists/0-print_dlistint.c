#include "lists.h"

/**
 * print_dlistint - prints out elements of a doubly linked list
 * @h: head node of doubly linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_elem;

		for (node_elem = 0; h; node_elem++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_elem);
}
