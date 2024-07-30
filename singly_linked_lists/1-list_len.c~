#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - print singly linked list
 * @head: Linked list head (first node)
 * Return: the number of nodes
 */
size_t print_list(const list_t *head)
{
	const list_t *current = head;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", current->len, current->str);
		current = current->next;
	}
	return (count);
}
