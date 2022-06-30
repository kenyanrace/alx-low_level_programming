#include "main.h"
#include <stdio.h>
/**
 *_strchr - prints buffer
 *@s: buffer1
 *@c: buffer2
 *Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
