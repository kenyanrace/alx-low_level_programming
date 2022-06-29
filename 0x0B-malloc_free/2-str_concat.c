#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: array 1
 * @s2: array 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k = 0, l = 0;
	char *concat;

	while (s1 && s1[k])
		k++;
	while (s2 && s2[l])
		l++;
	concat = malloc(sizeof(char) * (k + l + 1));
	if (concat == NULL)
		return (NULL);

	i = 0;
	j = 0;
	if (s1)
	{
		while (i < k)
		{
			concat[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (k + l))
		{
			concat[i] = s2[j];
			i++;
			j++;
		}
	}
	concat[i] = '\0';
	return (concat);
}
