#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: - Always 0 (success)
 */

int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	putchar(10);
	return (0);
}
