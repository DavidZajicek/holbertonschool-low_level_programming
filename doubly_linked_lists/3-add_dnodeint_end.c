#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node to end of dll
 * @head: head of list
 * @n: n
 * Return: new element's address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node = *head;

	new_node = create_dnode(n);
	if (new_node == NULL)
		return (NULL);

	if (*head != NULL)
	{
		while (current_node->next != NULL)
			current_node = current_node->next;

		new_node->prev = current_node;
		current_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
