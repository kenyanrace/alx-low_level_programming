#include "main.h"
/**
 * get_bit - jygtfhjk
 * @n: uyghj
 * @index: jhgf
 * Return: kjhgf
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0;
	int digit;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	digit = (n & mask) >> index;
	return (digit);
}
