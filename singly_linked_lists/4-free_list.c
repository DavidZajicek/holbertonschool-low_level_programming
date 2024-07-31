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
	list_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		if (temp_node->str != NULL)
			free(temp_node->str);
		free(temp_node);
	}
}
