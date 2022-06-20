#include "main.h"
/**
 * _strspn - prints buffer
 * @S: buffer
 * @accept: buffer2
 * Return: int
 */
unsigned int (char *s, char *accept)
{
	unsigned int j, i;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				break;
		}
		if (!(accept[i]))
			break;
	}
	return (j);
}
