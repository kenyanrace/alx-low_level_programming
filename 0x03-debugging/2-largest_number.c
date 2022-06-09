#include "main.h"

/**
 * largest_number - returns the largest of the three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largets_number(int a, int b, int c)
{
	int largest

		if (a > b && b > c)
		{
			largest = a;
		}
		else if (b > a && a > c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}

	return (largest);
}
