#include "lists.h"

/**
 * print_listint -> prints all elements in a list
 * @h: pointer to the start point of the list
 * Return: returns the number of nodes
 */


size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
