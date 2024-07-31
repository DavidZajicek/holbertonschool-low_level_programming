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
	list_t *current_node = head, *temp_node;

	if (head == NULL)
		return;

	while (current_node->next != NULL)
	{
		temp_node = current_node;
		current_node = current_node->next;
		if (temp_node->str != NULL)
			free(temp_node->str);
		free(temp_node);
	}
	free(current_node);
}
