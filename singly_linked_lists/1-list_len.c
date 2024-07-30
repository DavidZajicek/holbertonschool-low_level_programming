#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - return list of linked list
 * @head: Linked list head (first node)
 * Return: the number of nodes
 */
size_t list_len(const list_t *head)
{
	const list_t *current = head;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
