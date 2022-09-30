#include "main.h"
#define NULL 0
/**
 * _puts_recursion - prints a string followed by new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == NULL)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}
