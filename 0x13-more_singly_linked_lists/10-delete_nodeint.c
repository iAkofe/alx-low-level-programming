#include "lists.h"

/**
 * delete_nodeint_at_index -> funct that deletes a node at
 * a given position (idx)
 * @head: pointer to the head node
 * @index: index position to add the new node
 * Return: returns (1) if success else (-1) if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev;
	unsigned int count = 0;

	if ((*head) == NULL)
		return (-1);
	temp = (*head);
	if (temp != NULL && index == 0)
	{
		(*head) = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (temp != NULL || count == index)
	{
		prev->next = temp->next;
		free(temp);
		return (1);
	}
	else
		return (-1);
}
