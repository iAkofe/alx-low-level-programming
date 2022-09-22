include "main.h"
/**
 *string_toupper - prototype function
 *@s: string to convert to uppercase
 *Decription: convert string to uppercase
 *Return: pointer to char
 */
char *string_toupper(char *s)
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
