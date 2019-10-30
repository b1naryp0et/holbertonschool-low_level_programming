#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - Sort
 * @list: List
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *x;
	listint_t *y;
	listint_t *z;

	if (!list || !(*list))

		return;

	for (y = x = (*list)->next; y != NULL; y = x = y->next)

	{
		z = x->prev;

		while (z != NULL && x->n < z->n)
			z = z->prev;

		if (z == x->prev)
			continue;

		y = x->prev;
		if (x->next != NULL)
			x->next->prev = x->prev;

		x->prev->next = x->next;
		if (z)

		{
			x->next = z->next;
			x->prev = z;
			z->next = x;
			x->next->prev = x;
		}

		else

		{
			x->prev = NULL;
			x->next = *list;
			(*list)->prev = x;
			*list = x;
		}

		print_list(*list);
	}
}
