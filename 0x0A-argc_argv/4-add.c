#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: adds two arguments together
 * @argc: argument count
 * @argv: array of strings argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int result = 0, num, i, j, k;

	i = 1;
	while (i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
																		if (argv[i][j] > '9' || argv[i][j] < '0')
																		{
																			printf("%s\n", "Error");
				return (1);
																		}
			j++;
		}
		i++;
	}

	k = 1;
	while (k < argc)
	{
		num = atoi(argv[k]);
		result += num;
		k++;
	}
	printf("%d\n", result);
	return (0);
}
