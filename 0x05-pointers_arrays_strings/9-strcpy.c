#include "main.h"
/**
 * _strcpy - copy dest to src
 * @dest: destination
 * @src: source
 * Return: char
*/
char *_strcpy(char *dest, char *src)
{
	char *destValue = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (destValue);
}
