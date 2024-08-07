#include <stdlib.h>
#include "lists.h"


/**
 * insert_dnodeint_at_index - insert node
 * @head: head of list
 * @index: index to add new node
 * @n: value for new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(
	dlistint_t **head, unsigned int index, int n)
{
	dlistint_t *current_node = *head, *new_node;
	unsigned int count = 0;

	if (index == 0)
	{
		current_node = add_dnodeint(head, n);
		*head = current_node;
		return (current_node);
	}
	if (*head == NULL)
	{
		return (NULL);
	}

	while (current_node != NULL && count < index)
	{
		count++;
		current_node = current_node->next;
	}

	if (count == index && current_node != NULL)
	{
		new_node = create_dnode(n);
		new_node->prev = current_node->prev;
		new_node->next = current_node;
		if (current_node->prev != NULL)
		{
			current_node->prev->next = new_node;
		}
		current_node->prev = new_node;
		return (new_node);
	}
	if (count == index && current_node == NULL)
	{
		current_node = add_dnodeint_end(head, n);
		return (current_node);
	}
	return (NULL);
}
