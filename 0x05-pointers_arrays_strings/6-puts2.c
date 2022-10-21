#include "main.h"

/**
 * puts2 - funct to print every other string char
 * @str: funct argument
 *
 * Return: nothing
 */

void puts2(char *str)
{
	if (str)
	{
		do {
			if (*str)
				_putchar(*str++);
		} while (*str++);
		_putchar('\n');
	}
}
