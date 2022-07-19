#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - checkjnj
 * @h: name
 * Return: the numvhgjh
 */
size_t listint_len(const listint_t *h)
{
	if (h)
	{
		return (1 + listint_len(h->next));
	}
	return (0);
}
