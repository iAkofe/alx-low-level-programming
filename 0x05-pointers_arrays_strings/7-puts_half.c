#include "main.h"

/**
 * puts_half - funct to print second half of str
 * @str: the string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int strLen;

	if (str)
	{
		strLen = 0;
		while (*(str + strLen))
			++strLen;
		str += (strLen + 1) / 2;
		while (*str)
		{
			_putchar(*str);
			++str;
		}
		_putchar('\n');
	}
}
