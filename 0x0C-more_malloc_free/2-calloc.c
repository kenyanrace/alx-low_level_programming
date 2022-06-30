#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - prints
 * @s: jhgvb
 * @n: ygfvbnj
 * @b: jh
 * Return: notijb
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

/**
 * _calloc - functiom
 * @nmemb: kjdhgvb
 * @size: dlkjhn
 * Return: skxls
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	_memset(str, 0, nmemb * size);
	return (str);
}
