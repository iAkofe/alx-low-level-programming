#include "main.h"
/**
 *_strcat - prototype function
 *@dest: string src needs to be appended to
 *@src: string that needs to be appended to dest
 *Description: concatenates two strings
 *Return: dest - concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int dest_size;
	int src_size;
	int i;
	dest_size = 0;
	src_size = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (src[src_size] != '\0')
	{
		src_size++;
	}
	for (i = 0; i < src_size && src[i] != '\0'; i++)
	{
		dest[dest_size + i] = src[i];
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
