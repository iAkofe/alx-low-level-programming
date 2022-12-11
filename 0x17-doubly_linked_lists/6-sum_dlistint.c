#include "lists.h"

/**
 * sum_dlistint - sums all the data of a dll
 * @head: pointer to head of the dll
 * Return: sum of elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	if (head == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
