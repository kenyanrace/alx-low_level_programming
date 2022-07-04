#include "main.h"
#include <stdlib.h>
/**
 * free_dog - function
 * @d: struct
 * Return: djhyg
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
