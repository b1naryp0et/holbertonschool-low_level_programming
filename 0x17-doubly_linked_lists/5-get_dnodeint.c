#include "lists.h"

/**
 * get_dnodeint_at_index - gives the node at "index"
 * @head: the head of the list
 * @index: where the node you want is
 * Return: returns the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *var;

	if (!head)
		return (NULL);
	var = head;

	while (var && index > 0)
	{
		if (!var)
			return (NULL);
		temp = temp->next;
		index--;
	}

	return (temp);
}
