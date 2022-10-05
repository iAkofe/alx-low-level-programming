#include <stdio.h>

/**
 * main - Entry point
 * Description: programs prints the number of
 * arguments given to it
 * @argc: number of arguments passed
 * @argv: character array of parameters
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
