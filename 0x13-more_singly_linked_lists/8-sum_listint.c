#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - release
 * @head: ponter
 * Return: void
 */
int sum_listint(listint_t *head)
{
	unsigned int count = 0;
	listint_t *node_index = head;

	if (head == NULL)
		return (0);
	while (head)
	{
		count += head->n;
		node_index = head->next;
		head = node_index;
	}
	return (count);
}
