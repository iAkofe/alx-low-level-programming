#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: - Always 0 (success)
 */

int main(void)
{
	int c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}

	putchar(10);
	return (0);
}
