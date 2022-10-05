#include <stdio.h>

/**
 * main - Entry point
 * Description: this program prints its name
 * @argc: argument count
 * @argv: array of strings
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
		printf("%s\n", (argv[argc - 1]));
	return (0);
}
