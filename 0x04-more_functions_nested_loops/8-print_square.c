#include "main.h"
/**
 * print_square - prints a square
 * @size: variable
 * Return: A;ways 0
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
	
		for (x = 1; x <= sixe; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}