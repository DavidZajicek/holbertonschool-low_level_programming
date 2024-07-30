#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node to start of linked list
 * @head: start of linked list
 * @str: string to add into the linked list
 * Return: new starting node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->str = strdup(str);
	new_head->next = head;

	return (new_head);
}
