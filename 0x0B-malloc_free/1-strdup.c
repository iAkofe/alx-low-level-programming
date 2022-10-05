#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - alocates memory and assigns a string to it
 * @str: string to be assigned
 * Return: Returns pointer to duplicate string
 */

char *_strdup(char *str)
{
	int j = 0, i = 1;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ptr = (char *)malloc(i * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
