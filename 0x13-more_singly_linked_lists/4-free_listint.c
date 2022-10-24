#include "lists.h"

/**
 * free_listint -> frees a singly linked list
 * @head: pointer to head node
 * Return: returns nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
	{
		free(head);
		return;
	}

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
