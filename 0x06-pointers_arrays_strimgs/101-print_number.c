#include "main.h"
#include <math.h>
/**
 * print_number - prints an integer
 * @n: an integer
 * Return: void
 */
void print_number(int n)
{
	int i = 1;
	int num = n;

	while (num /10)
	{
		num /= 10;
		i *= 10;
	}
	if (n < 0)
		_putchar('-');
	while (i > 0)
	{
		num = n / i;
		i /= 10;
		if (n < 0)
			_putchar(num % 10 * -1 + '0');
		else _putchar(num % 10 + '0');
	}
}
