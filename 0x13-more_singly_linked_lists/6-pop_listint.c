#include "lists.h"

/**
 * pop_listint -> deletes the head node from a list
 * @head: pointer to the head node
 * Return: returns an integer
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if ((*head) == NULL)
		return (0);
	temp = (*head);
	node_data = temp->n;
	(*head) = (*head)->next;
	free(temp);
	return (node_data);
}
