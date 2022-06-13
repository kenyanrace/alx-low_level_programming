#include "main.h"
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
