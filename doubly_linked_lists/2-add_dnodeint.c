#include <stdlib.h>
#include "lists.h"

/**
 * create_dnode - create dnode
 * @n: n
 * Return: address of new node
 */
dlistint_t *create_dnode(const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
 * add_dnodeint - add node to start of dll
 * @head: head of list
 * @n: n
 * Return: new element's address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node = *head;

	new_node = create_dnode(n);
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	current_node->prev = new_node;
	return (new_node);
}
