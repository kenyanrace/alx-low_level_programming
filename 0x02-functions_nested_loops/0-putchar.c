#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char c[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count;

	for (count = 0; count < 8; count++)
	{
		_putchar(c[count]);
	}
	_putchar('\n');
	return (0);
}
