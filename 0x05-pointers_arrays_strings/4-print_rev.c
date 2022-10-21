#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: string to print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
			++t;
		while (s < t--)
			_putchar(*t);
		_putchar('\n');
	}
}
