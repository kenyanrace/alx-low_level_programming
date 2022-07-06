#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - ghgfhygfc
 * @array: array jhgfg
 * @size: hgf
 * @action: hhhh
 * Return: yhrf
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
