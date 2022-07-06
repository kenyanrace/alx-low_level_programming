#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - check djn
 * @name: name of the person
 * @f: j
 * Return: always
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
