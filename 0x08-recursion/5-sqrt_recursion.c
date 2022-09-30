#include "main.h"

/**
 * _sqrt_recursion - finds natural sqrt of a number
 * @n: integer argument
 * Return: sqrt of n or -1 if n has no natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *  _sqrt - finds square root of numbers
 * @a: first argument
 * @b: second argument
 * Return: returns an integer
 */

int _sqrt(int a, int b)
{
	int s = b * b;

	if (s > a)
	return (-1);
	if (s == a)
	return (b);
	return (_sqrt(a, b + 1));
}
