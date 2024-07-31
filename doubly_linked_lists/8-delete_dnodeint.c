#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index
 * @head: head
 * @index: index
 * Return: 1 on yes, -1 on no
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int count = 0;

	while (count < index && node != NULL)
	{
		count++;
		node = node->next;
	}

	if (count == index && node != NULL)
	{
		if (node->prev != NULL && node->next != NULL)
		{
			node->prev->next = node->next;
			node->next->prev = node->prev;
		}
		if (node->prev != NULL && node->next == NULL)
		{
			node->prev->next = NULL;
		}
		if (node->prev == NULL && node->next != NULL)
		{
			node->next->prev = NULL;
			*head = node->next;
		}
		node = NULL;
		return (1);
	}
	return (-1);
}
