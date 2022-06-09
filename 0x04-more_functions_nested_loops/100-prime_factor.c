#include <stdio.h>
/**
 * main - main block
 * Return: Always 0
 */
int main(void)
{
	unsigned long i, n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
