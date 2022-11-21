#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: - Always 0 (success)
 */

int main(void)
{
	int b = 97;
	int c = 65;

	while (b <= 122)
	{
		putchar(b);
		b++;
	}

	while (c <= 90)
	{
		putchar(c);
		c++;
	}

	putchar(10);
	return (0);

}
