#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
