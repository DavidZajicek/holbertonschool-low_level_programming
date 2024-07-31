#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - free list
 * @head: header of list to free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node = head, *next_node;
	int last_node = 0;

	if (head == NULL)
		return;

	while (current_node->next != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	free(current_node);
}
