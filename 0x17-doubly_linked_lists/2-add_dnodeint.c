#include "lists.h"

/**
 * add_dnodeint - Adds new node to start of linked list
 * @head: beginning of linked list
 * @n: element to insert into node
 *
 *Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
