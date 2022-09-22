include "main.h"
/**
 * cap_string - prototype function
 *Description: a function that capitalizes all words of a string.
 * @s: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char seperators[13] = {' ', '\t', '\n', ',', ';', '.', '!',
				       '?', '"', '(', ')', '{', '}' };
	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}
		else
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i] == seperators[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				{
					s[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (s);
}
