#include "lists.h"
/**
 * free_listp - frees a linked list
 * @head: head of a list double pointers.
 */
void free_listpointer(listp_t **head)
{
	listp_t *current, *temp;

	if (head  == NULL || *head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}


/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listpointer2(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
