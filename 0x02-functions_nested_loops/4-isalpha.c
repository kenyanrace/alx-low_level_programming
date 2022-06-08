#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic characters
 * @c: single letter input
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{	
	if ((c >= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
	
}
