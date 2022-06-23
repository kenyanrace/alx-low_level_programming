#include "main.h"
/**
 * _puts_recursion - recursive
 * @s: character
 * Return: void
 */
void _puts_recursive(char *s)
{
	if (*(s) != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}
	if (*(s) == '\0')
		_putchar('\n');
}
