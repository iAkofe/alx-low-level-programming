include "main.h"
/**
 * leet - prototype function
 *Description: function that encodes a string into 1337.
 * @s: an input string to encode
 * Return: An encode string
 */
char *leet(char *s)
{
	int i;
	int j;
	char code[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = code[j];
			}
		}
		i++;
	}
	return (s);
}
