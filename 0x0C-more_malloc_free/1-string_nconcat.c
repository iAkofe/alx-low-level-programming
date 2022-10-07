#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates the first string with the
 * next n string in the second string
 * @s1: first string argument
 * @s2: second string argument
 * @n: number of string to concatenate in the second string
 * Return: returns a pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length = n, count = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count])
	{
		length++;
		count++;
	}
	ptr = (char *)malloc(length * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	length = 0;
	count = 0;
	while (s1[count])
	{
		ptr[length++] = s1[count];
		count++;
	}
	count = 0;
	while (count < n)
	{
		ptr[length++] = s2[count];
		count++;
	}
	ptr[length] = '\0';
	return (ptr);
}
