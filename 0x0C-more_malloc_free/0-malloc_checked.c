#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - functions
 * @b: size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
