#include "lists.h"

/**
 * add_nodeint -> adds a new node to the beginning of the list
 * @head: pointer to the head node
 * @n: data (n) for the new node
 * Return: returns address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		exit(1);
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
