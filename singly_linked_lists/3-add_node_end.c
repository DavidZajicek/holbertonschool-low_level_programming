#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"


/**
 * create_node - create node
 * @str: string
 * Return: list_t *
 */
list_t *create_node(const char *str)
{
	
}

/**
 * add_node_end - add node to end of linked list
 * @head: start of linked list
 * @str: string to add into the linked list
 * Return: starting node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node = *head;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	int count = 0;

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[count] != '\0')
	{
		count++;
	}
	new_node->len = count;
	new_node->next = NULL;

	current_node->next = new_node;

	return (new_node);
}
