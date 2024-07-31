#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print list
 * @head: head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	dlistint_t *node = head;
	size_t count = 0;

	if (head == NULL)
		return (-1);
	while (node != NULL)
	{
		count++;
		printf("%i\n", node->n);
		node = node->next;
	}
	return (count);
}
