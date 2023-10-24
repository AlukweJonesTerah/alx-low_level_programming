#include "lists.h"
/**
 * insert_nodeint_at_index -  a function that inserts a new
 * node at a given position.
 * @head: head of a list double pointer to head.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr2 = *head;
	listint_t *ptr = malloc(sizeof(listint_t));
	unsigned int j = 0;

	if (idx != 0)
	{
		while (j < idx - 1 && ptr2 != NULL)
		{
			ptr2 = ptr2->next;
			j++;
		}
	}

	if (ptr2 == NULL && idx != 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		ptr->next = ptr2->next;
		ptr2->next = ptr;
	}

	return (ptr);
}
