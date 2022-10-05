#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- Entry point
 * Description: takes two arguments and prins their
 * product
 * @argc: argument count
 * @argv: array of string parameter
 * Return: Always 0 (succes)
 */

int main(int argc, char *argv[])
{
	int first, second, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	product = first * second;
	printf("%d\n", product);
	return (0);
}
