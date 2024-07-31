#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - print list
 * @head: head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *head)
{
	const dlistint_t *node = head;
	size_t count = 0;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
