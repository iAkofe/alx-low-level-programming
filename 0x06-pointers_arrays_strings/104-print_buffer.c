#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: first argument
 * @size: second argument
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int bPos;
	int lPos;

	bPos = 0;
	while (bPos < size)
	{
		lPos = 0;
		printf("%08x: ", bPos);
		while (lPos < 10)
		{
			if (bPos + lPos < size)
				printf("%02x", b[bPos + lPos]);
			else
				printf(" ");
			if (lPos % 2)
				putchar(' ');
			++lPos;
		}
		while (lPos < 10 && bPos + lPos < size)
		{
			if (b[bPos + lPos] < 32 || b[bPos + lPos] > 126)
				putchar('.');
			else
				putchar(b[bPos + lPos]);
			++lPos;
		}
		if (bPos + lPos < size)
			putchar('\n');
	}
		bPos += 10;
}
