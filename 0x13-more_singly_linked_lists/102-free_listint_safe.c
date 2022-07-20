#include "lists.h"
/**
 * free_listint_safe - iuygtfdx
 * @h: list
 * Return: jhg
 */
size_t free_listint_safe(const listint_t **h)
{
	size_t num = 0;
	int diff;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
