#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic characters
 * @c: single letter input
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	int i;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		i = 1
	}
	else
	{
		i = 0
	}
	return (i);
}
