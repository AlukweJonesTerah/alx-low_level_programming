#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		for (;head->prev != NULL;)
			head = head->prev;

	for (;(temp = head) != NULL;)
	{
		head = head->next;
		free(temp);
	}
}
