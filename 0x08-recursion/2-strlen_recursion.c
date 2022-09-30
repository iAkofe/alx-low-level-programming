#include "main.h"
#define NULL 0

/**
 * _strlen_recursion - prints the length of a string
 * @s: string
 * Return: returns length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == NULL)
	return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
