#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: function argument
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
