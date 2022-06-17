#include "main.h"
/**
 * leet - function
 * @str: string
 * Return: char
 */
char *leet(char *str)
{
	int i = 0, k;
	char s[] = "aAeEoOtTLl";
	char S[] = "4433007711";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (s[k] == str[i])
			{
				str[i] = S[k];
			}
		}
	}
	return (str);
}
