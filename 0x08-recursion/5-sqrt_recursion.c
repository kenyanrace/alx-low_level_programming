#include "main.h"
/**
 * sqrt_a - recursive
 * @a: number
 * @b: number od power
 * Return: always 0
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sgrt_a(a. b + 1));
}
/**
 * _sqrt_recurcion - recursive
 * @n: number
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
