#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - release
 * @head: ponter
 * @index: nhfhfjf
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node_index = head;

	if (head == NULL)
	{ 
		return (0);
	}
	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		node_index = head->next;
		head = node_index;
		++i;
	}
	return (node_index);
}
