#include "main.h"
/**
 * _strcmp - copies a strimng
 * @s1: s1
 * @s2: s2
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
