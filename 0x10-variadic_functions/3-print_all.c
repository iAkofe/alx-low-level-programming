#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all -> prints anything passed as arguments
 * @format: string format (data types c, i, f, s)
 *
 */

void print_all(const char * const format, ...)
{
	int index;
	char *string;
	char *sep = ", ";
	va_list args;

	va_start(args, format);
	index = 0;
	while (format != NULL && *(format + index) != '\0')
	{
		switch (*(format + index))
		{
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
				{
					string = "(nil)";
				}
				printf("%s", string);
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			default:
				index++;
				continue;
		}
		if (*(format + index + 1) != 0)
			printf("%s", sep);
		index++;
	}
	printf("\n");
	va_end(args);
}
