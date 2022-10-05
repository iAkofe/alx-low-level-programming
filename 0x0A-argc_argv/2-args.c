#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: prints the aruments to stdout
 * @argc: argument count
 * @argv: array of string parameters
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
