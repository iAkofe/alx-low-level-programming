#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -> function that prints a name
 * @name: name to print
 * @f: pointer to function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
