#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * of a linked list.
 * @head: head of a list.
 * @index: iis the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	unsigned int count = 0;

	previous = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		previous = previous->next;
		free(*head);
		*head = previous;
		return (1);
	}
	else
	{
		while (previous != NULL && count != index - 1)
		{
			count++;
			previous = previous->next;
		}
		if (count != index - 1)
			return (-1);
		current = previous->next;
		previous->next = previous->next->next;
		free(current);
		return (1);
	}
}
