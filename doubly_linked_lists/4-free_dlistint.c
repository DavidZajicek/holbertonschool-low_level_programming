#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_dlistint - free dlistint
 * @head: header of list to free
 * Return: void
 */
void free_dlistint(list_t *head)
{
	dlistint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
