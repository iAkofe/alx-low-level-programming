#include "main.h"

char *add_str(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_str - adds the integer val of two strings
 * @n1: first argument
 * @n2: second argument
 * @r: third argument
 * @r_index: fourth argument
 * Return: returns current index of buffer
 */

char *add_str(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	while (*n1 && *n2)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
		n1--;
		n2--;
		r_index--;
	}
	while (*n1)
	{
		num = (*n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
		n1--;
		r_index--;
	}
	while (*n2)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
		n2--;
		r_index--;
	}
	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10 + '0');
		return (r + r_index);
	}
	else if (tens && r_index < 0)
		return (0);
	return (r + r_index + 1);
}


/**
 * infinite_add - function that adds two numbers
 * @n1: first argument
 * @n2: second argument
 * @r: third argument
 * @size_r: fourth afgument
 * Return: returns pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	index = 0;
	while (*(n1 + index))
	{
		n1_len++;
		index++;
	}
	while (*(n2 + index))
	{
		n2_len++;
		index++;
	}
	if (size_r <= n1_len + 1 || size_r < n2_len + 1)
		return (0);
	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';
	return (add_str(n1, n2, r, --size_r));
}
