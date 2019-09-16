#include "lists.h"

/**
 * dlistint_len - Returns number of elements of a doubly linked list
 * @h: head node of doubly linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_elem;

	for (node_elem = 0; h; node_elem++)
	{
		h = h->next;
	}
	return (node_elem);
}
