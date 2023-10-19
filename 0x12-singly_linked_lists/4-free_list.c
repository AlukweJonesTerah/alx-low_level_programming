#include "lists.h"
/**
 * free_list - a function that frees a list_t l
 * @head: head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
