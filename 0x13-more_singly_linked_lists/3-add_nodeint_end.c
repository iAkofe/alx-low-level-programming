#include "lists.h"

/**
 * add_nodeint_end -> adds a node at the end of a list
 * @head: pointer to the head node
 * @n: the integer attribute for the structure
 * Return: returns pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		exit(-1);
	temp = (*head);
	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
