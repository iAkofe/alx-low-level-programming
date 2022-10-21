#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRAPH_MIN 33
#define GRAPH_MAX 126

/**
 * main - Entry point
 * Description: Generate valid passwords
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum = 2772;
	char c;

	srand(time(NULL));

	while (sum > GRAPH_MAX)
	{
		c = (rand() % (GRAPH_MAX - GRAPH_MIN) + GRAPH_MIN);
		sum = sum - c;
		if (sum < GRAPH_MIN)
		{
			c = c - (GRAPH_MIN - sum);
			sum = GRAPH_MIN;
		}
		putchar(c);
	}
	putchar(sum);
	putchar('\n');
	return (0);
}
