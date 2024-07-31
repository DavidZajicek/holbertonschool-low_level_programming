#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * create_node - create node
 * @str: string
 * Return: new node
 */
list_t create_node(const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

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

	return (new_node);
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
	list_t *new_node;
	int count = 0;

	new_node = create_node(new_node);
	if (new_node == NULL)
		return (NULL);

	if (current_node == NULL)
	{
		*head = current_node;
		return (new_node);
	}
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = new_node;

	return (new_node);
}
