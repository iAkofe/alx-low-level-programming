#include "main.h"
#define NULL 0

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == NULL)
	return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
