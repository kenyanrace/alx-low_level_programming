#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	char temp[1000];
	int count = 0;
	int i, j;

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;
	for (i = 0; i < count; i++)
	{
		temp{i} = s[j];
		j--;
	}
	for (i = 0; i < count; i++)
	{
		s[i] = temp[i];
	}
}
