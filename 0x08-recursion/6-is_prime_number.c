#include "main.h"

/**
 * is_prime_number - checks if an integer is prime
 * @n: integer argument
 * Return: 1 if integer is prime else 0
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 *  _prime - checks is a number is prime
 * @a: first argument
 * @b: second argument
 * Return: 1 or 0
 */

int _prime(int a, int b)
{
	if (a <= 1)
	return (0);
	if (a % b == 0 && b > 1)
	return (0);
	if ((a / b) < b)
	return (1);
	return (_prime(a, b + 1));
}
