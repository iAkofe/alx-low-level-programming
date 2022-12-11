#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given index pos
 * @head: pointer to the dll
 * @index: 0-based index of the position of node to delete
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *last = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if ((*head)->next == NULL && index == 0)
	{
		free(head);
		return (1);
	}
	while (last->next != NULL)
	{
		if (count == index)
		{
			if (last->prev == NULL)
			{
				last->next->prev = NULL;
				*head = last->next;
				free(last);
				return (1);
			}
			else
			{
				last->prev->next = last->next;
				last->next->prev = last->prev;
				free(last);
				return (1);
			}
		}
		last = last->next;
		count++;
	}
	count++;
	if (count == index)
	{
		last->prev->next = NULL;
		free(last);
		return (1);
	}
	return (-1);
}
