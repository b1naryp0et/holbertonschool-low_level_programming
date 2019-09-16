#include "lists.h"

/**
 * get_dnodeint_at_index - gives the node at "index"
 * @head: the head of the list
 * @index: location of node
 * Return: returns the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t *var;

        if (!head)
                return (NULL);
        var = head;
        while (index > 0 && var != NULL)
        {
                index--;
                if (!var)
                        return (NULL);
                var = var->next;
        }

        return (var);
}
