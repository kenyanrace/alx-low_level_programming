#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - mndjn
 * @d: jhuijl;
 * Return: jcnjd
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
