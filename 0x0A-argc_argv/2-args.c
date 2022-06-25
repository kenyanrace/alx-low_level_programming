#include <stdio.h>
#include "main.h"
/**
 * main - prits
 * @argc: arguments
 * @argv: an array
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
