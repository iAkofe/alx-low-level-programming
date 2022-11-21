#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int d1, d2, d3;

	d1 = 0;
	while (d1 < 8)
	{
		d2 = d1 + 1;
		while (d2 < 9)
		{
			d3 = d2 + 1;
			while (d3 < 10)
			{
				putchar((d1 % 10) + '0');
				putchar((d2 % 10) + '0');
				putchar((d3 % 10) + '0');
				if (d1 == 7 && d2 == 8 && d3 == 9)
					break;
				putchar(',');
				putchar(' ');
				d3++;
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
