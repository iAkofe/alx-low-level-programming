#include "main.h"

/**
 * largest_number - returns largest of 3 number
 * @a: first integr
 * @b: second integer
 * @c: third integer
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a >= b) && (a >= c))
	{
		largest = a;
	}
	else if ((b >= a) && (b >= c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
