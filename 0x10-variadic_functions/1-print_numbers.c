#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -< prints numbers given as parameters
 * @separator: seperator string
 * @n: number of arguments
 * Return: alwaus 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%d", va_arg(args, int));
			if (i == (n - 1))
				break;
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
