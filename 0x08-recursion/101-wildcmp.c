#include "main.h"
#define NULL 0

/**
 * wildcmp - checks if two strings are identical
 * @s1: first string
 * @s2: second string
 * Return: returns 1 if true else return 0
 */

int wildcmp(char *s1,  char *s2)
{
	if (*s1 == NULL)
	{
		if (*s2 != NULL && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == NULL);
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
