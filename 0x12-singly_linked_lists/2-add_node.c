#include <stdlib.h>
#include <string.h>
#include <stdio.h> 
#include "lists.h"
/**
 * _strlen - function
 * @s: s is skjhg
 * Return: value
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - checj
 * @head: name
 * @str: jhgf
 * Return: the nu
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}
