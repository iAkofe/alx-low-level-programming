#include "main.h"
/**
 *reverse_array - prototype function
 *@a: array to be reversed
 *@n: number of elements in array a
 *Description: reverses the content of an array of ints
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp_num;
	i = 0;
	n--;

	while (i < n)
	{
		temp_num = a[i];
		a[i] = a[n];
		a[n] = temp_num;
		i++;
		n--;
	}
}
