#include "main.h"
/**
 * clear_bit - jygtfhjk
 * @n: uyghj
 * @index: jhgf
 * Return: kjhgf
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
