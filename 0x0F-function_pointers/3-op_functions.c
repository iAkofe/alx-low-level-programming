#include "3-calc.h"
#include "stdio.h"

/**
 * op_add - function that adds two integer
 * @a: first integer
 * @b: second integer
 * Return: retuns value of a+b
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - function that adds two integer
 * @a: first integer
 * @b: second integer
 * Return: retuns value of a-b
 */

int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - function that adds two integer
 * @a: first integer
 * @b: second integer
 * Return: retuns value of a*b
 */

int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}

/**
 * op_div - function that adds two integer
 * @a: first integer
 * @b: second integer
 * Return: retuns value of a/b
 */

int op_div(int a, int b)
{
	int ratio;

	ratio = a / b;
	return (ratio);
}


/**
 * op_mod - function that adds two integer
 * @a: first integer
 * @b: second integer
 * Return: retuns value of a%b
 */

int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
