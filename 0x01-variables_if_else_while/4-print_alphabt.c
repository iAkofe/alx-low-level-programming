#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
			c++;
		}
		else
		{
			c++;
		}
	}

	putchar(10);
	return (0);
}
