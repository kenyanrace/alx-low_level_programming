#include "main.h"
/**
 * strinp_toupper - function
 * @s: sn array
 * Return: char
 */
char *string_toupper(char *)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
