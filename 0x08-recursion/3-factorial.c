#include "main.h"

/**
 * factorial - finds factorial of a given number
 * @n: integer number
 * Return: positive integer
 * if n is lower tn 0, then return -1 to indicate
 * an error
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0 || n == 1)
	return (1);
	return (n * factorial(n - 1));
}
