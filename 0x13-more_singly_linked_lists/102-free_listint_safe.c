#include "lists.h"
/**
 * free_listpointer2 - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listpointer2(listp_t **head)
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
}
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: head of a list pointer.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	listp_t *ptr, *new, *add;
	listint_t *current;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listpointer2(&ptr);
				return (node);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		node++;
	}

	*h = NULL;
	free_listpointer2(&ptr);
	return (node);
}
