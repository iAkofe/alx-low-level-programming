#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: - Always 0 (success)
 */

int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar((c % 10) + '0');
		if (c == 9)
			break;
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
