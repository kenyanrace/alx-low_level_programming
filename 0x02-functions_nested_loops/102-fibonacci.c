#include <stdio.h>
#include "main.h"
/**
 * main - print first 50 numbers
 * Return: 0
 */
int main(void)
{
	int i;
	long n1, n2, next;

	n1 = 1;
	n2 = 2;

	for (i = 0; i <= 50; i++)
	{
		if (i == 49)
		{
			printf("%lu", n1);
		}
		else
		{
			printf("%lu, ", n1);
			next = n1 + n2;
			n1 = n2;
			n2 = next;
		}
	}
	printf("\n");
	return (0);
}
