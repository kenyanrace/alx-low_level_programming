#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, Aux;

	n = n - 1;
	whle (i <= n)
	{
		Aux = a[i];
		a[i++] = a[n];
		a[n--] = Aux;
	}
}
