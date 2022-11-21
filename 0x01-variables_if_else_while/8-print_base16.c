#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: - Always 0 (success)
 */

int main(void)
{
	int c = 48;
	int f = 97;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}

	while (f <= 102)
	{
		putchar(f);
		f++;
	}

	putchar(10);
	return (0);
}
