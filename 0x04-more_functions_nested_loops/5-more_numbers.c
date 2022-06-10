#include "main.h"
/**
 * more_numbers - prints ten times more
 * Return: void
 */
void more_numbers(void)
{
	int a, n;

	for (a = 0; a < 10; a++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n / 10 != 0)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
