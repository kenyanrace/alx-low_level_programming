#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that returns yhe kendl
 * @s: a string
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - fufrgdhjk
 * @s1: ouiyghjk
 * @n: jhygb
 * @s2: hgjj
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l, t, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l = _strlen(s1);
	t = _strlen(s2);
	if (n < t)
		t = n;
	str = malloc(t + l + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < t; i++)
		*(str + 1) = *(s1 + i);
	for (i = 0; i < l; i++)
		*(str + (i + t)) = *(s2 + i);
	*(str + (i + t)) = '\0';
	return (str);
}
