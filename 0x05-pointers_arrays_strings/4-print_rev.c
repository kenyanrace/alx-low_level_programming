#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i, S1;

	S1 = _strlen(s);

	for (i = S1 - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - length of s string
 * @s: string considered
 * Return: int
 */
int _strlen(char *s)
{
	int count = 0;
	int start;

	for (start = 0; s[start] != 0; start++)
	{
		count++;
	}
	return (count);
}
