#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings -> prints strings passed as param
 * @separator: separator string
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	va_list args;
	unsigned int i;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		string = va_arg(args, char *);
		if (separator == NULL)
		{
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);
		}
		else
		{
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);
			if (i == (n - 1))
				break;
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
