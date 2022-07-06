#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - add 
 * @a: first
 * @b: jjhhghg
 * Return: 0 jdfjkdfkj
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - add 
 * @a: first
 * @b: jjhhghg
 * Return: 0 jdfjkdfkj
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - add 
 * @a: first
 * @b: jjhhghg
 * Return: 0 jdfjkdfkj
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - add 
 * @a: first
 * @b: jjhhghg
 * Return: 0 jdfjkdfkj
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - add 
 * @a: first
 * @b: jjhhghg
 * Return: 0 jdfjkdfkj
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
