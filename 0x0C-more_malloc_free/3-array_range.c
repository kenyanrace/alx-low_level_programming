#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function 
 * @min: ygtfjkiuh
 * @max: jhgbjh
 * Return: integre
 */
int *array_range(int min, int max)
{
	int *str, k;

	if (min > max)
	{
		return (NULL);
	}
	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; min <= max; k++, min++)
	{
		*(str + k) = min;
	}
	return (str);
}
