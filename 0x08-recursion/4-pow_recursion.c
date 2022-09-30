#include "main.h"

/**
 * _pow_recursion - finds the value of x to the power of y
 * @x: first integer
 * @y: second integer
 * Return: -1 if negative value or integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
