#include "main.h"

/**
 * rev_string - function that reverses strings
 * @s: argument of function
 * Return: nohing
 */

void rev_string(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
			++t;
		while (s < --t)
		{
			*s ^= *t;
			*t ^= *s;
			*s ^= *t;
			++s;
		}
	}
}
