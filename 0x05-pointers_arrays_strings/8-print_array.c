#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: first argument
 * @n: second argument
 * Return: nothing
 */

void print_array(int *a, int n)
{
	if (a)
	{
		while (n > 0)
		{
			printf("%d", *a++);
			if (--n)
				printf(", ");
		}
		putchar('\n');
	}
}
