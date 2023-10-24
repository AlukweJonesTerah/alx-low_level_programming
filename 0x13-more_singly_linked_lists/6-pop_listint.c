#include "lists.h"
/**
 * pop_listint -  a function that deletes the head
 * node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: head of a list of double pointer.
 * Return: 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h, *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
