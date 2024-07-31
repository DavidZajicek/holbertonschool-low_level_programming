#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node index
 * @head: head of list
 * @index: index to look for
 * Return: index or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	while (node != NULL)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;
	}
	return (NULL);
}
