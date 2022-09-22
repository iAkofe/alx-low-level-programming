#include "main.h"
/**
 *  *_strncpy - prototype function
 *   *@dest: string to copy to
 *    *@src: string that needs to be copied to dest
 *     *@n: number of characters to copy
 *      *Description: copy a string
 *       *Return: dest copied string
 *        */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_size;
	src_size = 0;
	i = 0;
	while (src[src_size] != '\0')
	{
		src_size++;
	}
	if (n - 1 > src_size)
	{
		while (i < src_size)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
