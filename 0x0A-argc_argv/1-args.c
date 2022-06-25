#include "main.h"
#include <stdio.h>
/**
 * main - printd bufffer
 * @argc: numbrre
 * @argv: array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count;

	(void)argv;
	for (count = 0; count < argc; count++)
	{
		if (count + 1 == argc)
			printf("%i\n", count);
	}
	return (0);
}
