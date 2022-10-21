#include "lists.h"

/**
 * print_list -> prints all elem of a list
 * @h: pointer to the head node
 * Return: returns the number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	
	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		n++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (n);
}

